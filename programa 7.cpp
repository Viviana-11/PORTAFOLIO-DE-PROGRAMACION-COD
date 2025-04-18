#include <iostream>
using namespace std;

int main() {
    const int tamano = 10;
    int arrai[tamano];
    int ultimo; 

    for (int i = 0; i < tamano; i++) {
        cout << "Ingrese numero: " << i + 1 << ": ";
        cin >> arrai[i];
    }

    ultimo = arrai[tamano - 1];

    for (int i = tamano - 1; i > 0; i--) {
        arrai[i] = arrai[i - 1]; 
    }

    arrai[0] = ultimo;

    cout << "Arrai despues de la rotacion: ";
    for (int i = 0; i < tamano; i++) {
        cout << arrai[i] << " ";
    }
    cout << endl;

    return 0;
}

