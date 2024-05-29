/*
Autor: Harry Enrique Bodán Navarro
Fecha: 22 de Mayo del 2024
Version: 1.0

Problema planteado: Diseño un algoritmo de autenticación de usuarios que acepte el ingreso a un sistema
siempre que las credenciales (user, password) sean correctas, y rechace las
combinaciones incorrectas. El programa deberá repetir la solicitud de ingreso de
credenciales mientras no se digiten correctamente, utilizando mensajes adecuados para
el usuario.

*/


#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    const string usuario_correcto = "somosUCA";
    const string contraseña_correcta = "2023";

    string usuario;
    string contraseña;


    while (true) {

        cout << "Ingrese su nombre de usuario: ";
        cin >> usuario;

        cout << "Ingrese su contraseña: ";
        cin >> contraseña;

        if (usuario == usuario_correcto && contraseña == contraseña_correcta) {
            cout << "¡Bienvenido al sistema!" << endl;
            break;
        } else {
            system("cls");
            cout << "Credenciales inválidad. Por favor, inténtelo de nuevo." << endl;
        }
    }

    return 0;
}
