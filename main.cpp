// Calculadora de consola.
// Lee dos números y un operador (+, -, *, /) y muestra el resultado.
// Valida la división entre cero.
#include "Calculadora.h"

int main() {
    Calculadora calculadora;

    if (calculadora.leerDatos()) {
        calculadora.calcular();
    }

    return 0;
}
