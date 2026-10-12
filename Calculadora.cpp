#include "Calculadora.h"
#include <iostream>
using namespace std;

Calculadora::Calculadora() {
    num1 = 0;
    num2 = 0;
    operador = '+';
}

double Calculadora::sumar() {
    return num1 + num2;
}

double Calculadora::restar() {
    return num1 - num2;
}

double Calculadora::multiplicar() {
    return num1 * num2;
}

double Calculadora::dividir() {
    return num1 / num2;
}

// Lee los datos desde la entrada estándar. Regresa false si la entrada no es válida.
bool Calculadora::leerDatos() {
    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if (cin.fail()) {
        cout << "Error: entrada no valida." << endl;
        return false;
    }
    return true;
}

void Calculadora::calcular() {
    double resultado;

    switch (operador) {
        case '+':
            resultado = sumar();
            break;
        case '-':
            resultado = restar();
            break;
        case '*':
            resultado = multiplicar();
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: no se puede dividir entre cero." << endl;
                return;
            }
            resultado = dividir();
            break;
        default:
            cout << "Error: operador no valido." << endl;
            return;
    }

    cout << num1 << " " << operador << " " << num2 << " = " << resultado << endl;
}
