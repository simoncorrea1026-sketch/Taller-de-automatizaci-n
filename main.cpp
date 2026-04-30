#include <iostream>
#include "Taylor.h"
using namespace std;

int main() {
    int opcion;
    double x;
    int terminos;

    cout << "SERIES DE TAYLOR" << endl;
    cout << "1. Seno(x)" << endl;
    cout << "2. Coseno(x)" << endl;
    cout << "3. Exponencial(e^x)" << endl;
    cout << "4. Logaritmo ln(1+x)" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> terminos;

    if (terminos <= 0) {
        cout << "La cantidad de terminos debe ser mayor que cero." << endl;
        return 0;
    }

    if (opcion == 1)
        cout << senoTaylor(x, terminos);
    else if (opcion == 2)
        cout << cosenoTaylor(x, terminos);
    else if (opcion == 3)
        cout << exponencialTaylor(x, terminos);
    else if (opcion == 4)
        cout << logaritmoTaylor(x, terminos);
    else
        cout << "Opcion invalida";

    return 0;
}
