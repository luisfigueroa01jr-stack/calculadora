#ifndef CALCULADORA_H
#define CALCULADORA_H

// Clase Calculadora: guarda dos números y un operador,
// y realiza la operación correspondiente.
class Calculadora {
private:
    double num1;
    double num2;
    char operador;

    double sumar();
    double restar();
    double multiplicar();
    double dividir();

public:
    Calculadora();

    bool leerDatos();
    void calcular();
};

#endif
