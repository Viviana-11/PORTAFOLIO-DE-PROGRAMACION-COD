#include <iostream>
#include <string>
using namespace std;

struct Mochila {
    string  tamano;
    string forma;
    float precio;
};

int main() {
    Mochila mochilas[3] = {
        {"Grande", "Rectangular", 120.50},
        {"Mediana", "Cuadrada", 85.75},
        {"Pequeña", "Ovalada", 60.00}
    };

    cout << "Datos de las mochilas:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nMochila " << i + 1 << ":" << endl;
        cout << "Tamano: " << mochilas[i].tamano << endl;
        cout << "Forma: " << mochilas[i].forma << endl;
        cout << "Precio: S/ " << mochilas[i].precio << endl;
    }

    return 0;
}

