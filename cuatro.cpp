/*
Autor: Harry Enrique Bodán Navarro
Fecha: 22 de Mayo del 2024
Version: 1.0

Problema planteado: Cree el siguiente menú de opciones para una aplicación prototipo sobre venta de artículos,
el usuario puede navegar por el menú mientras no seleccione la opción salir.

*/


#include <iostream>
#include <windows.h>

using namespace std;

enum Menu { INICIO = 1, VENTAS, CAJA, SALIR };

void displayInicioMenu();
void displayVentasMenu();
void displayFacturarMenu();
void displayCreditoMenu();
void displayCajaMenu();
void displayMainMenu();

void inicioMenu();
void ventasMenu();
void facturarMenu();
void creditoMenu();
void cajaMenu();

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int option;
    bool exit = false;

    while (!exit) {
        displayMainMenu();
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case INICIO:
                inicioMenu();
                break;
            case VENTAS:
                ventasMenu();
                break;
            case CAJA:
                cajaMenu();
                break;
            case SALIR:
                cout << "Saliendo..." << endl;
                exit = true;
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                system("pause");
                break;
        }
    }

    return 0;
}

void displayInicioMenu() {
    system("cls");
    cout << "Menú Inicio:" << endl;
    cout << "1. Abrir" << endl;
    cout << "2. Cerrar" << endl;
    cout << "3. Volver al Menú Principal" << endl;
}

void displayVentasMenu() {
    system("cls");
    cout << "Menú Ventas:" << endl;
    cout << "1. Facturar" << endl;
    cout << "2. Eliminar Factura" << endl;
    cout << "3. Reimprimir" << endl;
    cout << "4. Volver al Menú Principal" << endl;
}

void displayFacturarMenu() {
    system("cls");
    cout << "Menú Facturar:" << endl;
    cout << "1. Al Crédito" << endl;
    cout << "2. Al contado" << endl;
    cout << "3. Volver al Menú Ventas" << endl;
}

void displayCreditoMenu() {
    system("cls");
    cout << "Menú Al Crédito:" << endl;
    cout << "1. Registrar Cliente" << endl;
    cout << "2. Cerrar Crédito" << endl;
    cout << "3. Volver al Menú Facturar" << endl;
}

void displayCajaMenu() {
    system("cls");
    cout << "Menú Caja:" << endl;
    cout << "1. Abrir Caja" << endl;
    cout << "2. Realizar Cierre" << endl;
    cout << "3. Registrar salida" << endl;
    cout << "4. Registrar ingreso" << endl;
    cout << "5. Volver al Menú Principal" << endl;
}

void displayMainMenu() {
    system("cls");
    cout << "***** Menú Principal *****" << endl;
    cout << "1. Inicio" << endl;
    cout << "2. Ventas" << endl;
    cout << "3. Caja" << endl;
    cout << "4. Salir" << endl;
}

void inicioMenu() {
    int option;
    do {
        displayInicioMenu();
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Abriendo..." << endl;
                system("pause");
                break;
            case 2:
                cout << "Cerrando..." << endl;
                system("pause");
                break;
            case 3:
                cout << "Volviendo al Menú Principal..." << endl;
                system("pause");
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                system("pause");
                break;
        }
    } while (option != 3);
}

void ventasMenu() {
    int option;
    do {
        displayVentasMenu();
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                facturarMenu();
                break;
            case 2:
                cout << "Eliminando factura..." << endl;
                system("pause");
                break;
            case 3:
                cout << "Reimprimiendo..." << endl;
                system("pause");
                break;
            case 4:
                cout << "Volviendo al Menú Principal..." << endl;
                system("pause");
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                system("pause");
                break;
        }
    } while (option != 4);
}

void facturarMenu() {
    int option;
    do {
        displayFacturarMenu();
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                creditoMenu();
                break;
            case 2:
                cout << "Facturando al contado..." << endl;
                system("pause");
                break;
            case 3:
                cout << "Volviendo al Menú Ventas..." << endl;
                system("pause");
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                system("pause");
                break;
        }
    } while (option != 3);
}

void creditoMenu() {
    int option;
    do {
        displayCreditoMenu();
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Registrando cliente..." << endl;
                system("pause");
                break;
            case 2:
                cout << "Cerrando crédito..." << endl;
                system("pause");
                break;
            case 3:
                cout << "Volviendo al Menú Facturar..." << endl;
                system("pause");
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                system("pause");
                break;
        }
    } while (option != 3);
}

void cajaMenu() {
    int option;
    do {
        displayCajaMenu();
        cout << "Seleccione una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Abriendo caja..." << endl;
                system("pause");
                break;
            case 2:
                cout << "Realizando cierre..." << endl;
                system("pause");
                break;
            case 3:
                cout << "Registrando salida en caja..." << endl;
                system("pause");
                break;
            case 4:
                cout << "Registrando ingreso en caja..." << endl;
                system("pause");
                break;
            case 5:
                cout << "Volviendo al Menú Principal..." << endl;
                system("pause");
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                system("pause");
                break;
        }
    } while (option != 5);
}
