/*
Autor: Harry Enrique Bodán Navarro
Fecha: 22 de Mayo del 2024
Version: 1.0

Problema planteado: El departamento de matemáticas de un centro educativo solicita un programa para trabajar
con matrices. Se requiere que el programa lea una matriz y verifique de qué tipo es:

Matriz Diagonal: es un tipo de matriz cuadrada en la que los elementos que no se
encuentran en la diagonal principal son iguales a cero.

Matriz Triangular Superior: se trata de una matriz cuadrada en la que al menos uno
de los términos que está por encima de la diagonal principal es distinto a cero, y
todos los que están situados por debajo a ella son iguales a cero.

Matriz Triangular Inferior: a diferencia del tipo anterior, en este tipo de matriz al
menos uno de los elementos que están debajo de la diagonal principal son
diferentes a cero y todos los que están por encima de ella son iguales a cero.

*/


#include "structs.h"
#include <windows.h>
#include <iostream>
using namespace std;

const int MAX = 100;

void leerMatriz(int matriz[MAX][MAX], int n);
bool esDiagonal(int matriz[MAX][MAX], int n);
bool esTriangularSuperior(int matriz[MAX][MAX], int n);
bool esTriangularInferior(int matriz[MAX][MAX], int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    int matriz[MAX][MAX];

    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;

    leerMatriz(matriz, n);

    if (esDiagonal(matriz, n)) {
        cout << "La matriz es diagonal." << endl;
    } else if (esTriangularSuperior(matriz, n)) {
        cout << "La matriz es triangular superior." << endl;
    } else if (esTriangularInferior(matriz, n)) {
        cout << "La matriz es triangular inferior." << endl;
    } else {
        cout << "La matriz no es ni diagonal, ni triangular superior, ni triangular inferior." << endl;
    }

    return 0;
}

void leerMatriz(int matriz[MAX][MAX], int n) {
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
}

bool esDiagonal(int matriz[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && matriz[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool esTriangularSuperior(int matriz[MAX][MAX], int n) {
    bool tieneElementoArriba = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j && matriz[i][j] != 0) {
                return false;
            }
            if (i < j && matriz[i][j] != 0) {
                tieneElementoArriba = true;
            }
        }
    }
    return tieneElementoArriba;
}

bool esTriangularInferior(int matriz[MAX][MAX], int n) {
    bool tieneElementoAbajo = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j && matriz[i][j] != 0) {
                return false;
            }
            if (i > j && matriz[i][j] != 0) {
                tieneElementoAbajo = true;
            }
        }
    }
    return tieneElementoAbajo;
}