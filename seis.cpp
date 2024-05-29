/*
Autor: Harry Enrique Bodán Navarro
Fecha: 22 de Mayo del 2024
Version: 1.0

Problema planteado:
Calcular el enésimo término de la serie de Fibonacci definida por:
A1 = 1
A2 = 2
A3 = 1 + 2 = A1 + A2
An = An – 1 + An – 2 (n >= 3)

*/

#include <iostream>
#include <windows.h>

using namespace std;

int fibonacci(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    int a = 1; 
    int b = 2; 
    int fib = 0;

    for (int i = 3; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Ingrese el valor de n para calcular el enésimo término de la serie de Fibonacci: ";
    cin >> n;

    if (n <= 0) {
        cout << "El valor de n debe ser un entero positivo." << endl;
    } else {
        int result = fibonacci(n);
        cout << "El término " << n << " de la serie de Fibonacci es: " << result << endl;
    }

    return 0;
}
