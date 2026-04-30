#include "Taylor.h"
#include <math.h>

double factorial(int n) {
    double resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

double senoTaylor(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += (pow(-1, i) * pow(x, 2*i+1)) / factorial(2*i+1);
    }
    return suma;
}

double cosenoTaylor(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += (pow(-1, i) * pow(x, 2*i)) / factorial(2*i);
    }
    return suma;
}

double exponencialTaylor(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pow(x, i) / factorial(i);
    }
    return suma;
}

double logaritmoTaylor(double x, int n) {
    double suma = 0;

    if (x <= -1) return 0;

    for (int i = 1; i <= n; i++) {
        suma += (pow(-1, i+1) * pow(x, i)) / i;
    }

    return suma;
}
