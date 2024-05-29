/*
Autor: Harry Enrique Bodán Navarro
Fecha: 22 de Mayo del 2024
Version: 1.0

Problema planteado: Los docentes de un colegio de primaria requieren una aplicación para almacenar y ordenar
los siguientes datos de sus estudiantes: nombre completo, nota final de la materia 1, nota
final de la materia 2, nota final de la materia 3, promedio. El ordenamiento puede realizarse
por cualquiera de los campos indicados.

*/


#include "structs.h"
#include <windows.h>
#include <iostream>
using namespace std;

//El ordenamiento lo hice en base al promedio calculado de cada estudiante
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int numEstudiantes = 0;

    cout<<"Cuántos estudiantes ingresará?"<<endl;
    cin>>numEstudiantes;
    cin.ignore();

    Estudiante estudiantes[numEstudiantes];

    double sumaTotal = 0.00;


    for(int i=0; i<=numEstudiantes-1; i++){
        cout<<"Nombre Estudiante: "<<i+1<<endl;
        cin.getline(estudiantes[i].nombre, 80);
        sumaTotal = 0;

        for(int j=0; j<=2; j++){
            cout<<"Nota: "<<j+1<<endl;
            cin>>estudiantes[i].notas[j];
            cin.ignore();
            sumaTotal = sumaTotal + estudiantes[i].notas[j];;
            if(j==2){
                estudiantes[i].promedio = sumaTotal/3;
            }
        }
    }

    Estudiante auxiliar;

    for(int k = 0; k < numEstudiantes - 1; k++){
        for(int l = 0; l < numEstudiantes - k - 1; l++){
            if(estudiantes[l].promedio > estudiantes[l + 1].promedio){
                Estudiante auxiliar = estudiantes[l];
                estudiantes[l] = estudiantes[l + 1];
                estudiantes[l + 1] = auxiliar;
            }
        }
    }

    cout << "Estudiantes ordenados por promedio:" << endl;
    for(int i = 0; i < numEstudiantes; i++){
        cout << "Nombre: " << estudiantes[i].nombre << ", Promedio: " << estudiantes[i].promedio << endl;
    }

    return 0;
}