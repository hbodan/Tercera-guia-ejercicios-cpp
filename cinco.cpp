/*
Autor: Harry Enrique Bodán Navarro
Fecha: 22 de Mayo del 2024
Version: 1.0

Problema planteado: Se requiere incorporar los módulos MCD y MCM para una calculadora que está en
desarrollo.

*/

#include "structs.h"
#include <windows.h>
#include <iostream>
using namespace std;

int calcularMCD(int num1, int num2);
int calcularMCM(int num1, int num2);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int num1=0, num2 =0;
    int opcionPrincipal = 0;

    do{
        cout<<"Calculadora de MCD Y MCM"<<endl;
        cout<<"------------------------"<<endl;
        cout<<"1. Calcular MCD"<<endl;
        cout<<"2. calcular MCM"<<endl;
        cout<<"0. Salir"<<endl;
        cin>>opcionPrincipal;

        if(opcionPrincipal!=0){
            cout<<"Digite el número 1"<<endl;
            cin>>num1;

            cout<<"Digite el número 2"<<endl;
            cin>>num2;
        }

        switch (opcionPrincipal)
        {
            case 1:{
                int mcd = calcularMCD(num1, num2);
                cout<<"Máximo común divisor de los números dados: "<<mcd<<endl;
                break;
            }
            case 2:{
                int mcm = calcularMCM(num1, num2);
                cout<<"Mínimo Común Múltiplo de los números dados: "<<mcm<<endl;
                break;
            }
            default:{
                cout<<"Ciao Ciao"<<endl;
                break;
            }
        }

    }while(opcionPrincipal!=0);
}

int calcularMCD(int num1, int num2){
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
};

int calcularMCM(int num1, int num2) {
    return (num1 / calcularMCD(num1, num2)) * num2;
}