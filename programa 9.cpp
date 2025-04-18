#include <iostream>
using namespace std;

int main() {
    int tamano = 10;
    int arrai1[tamano], arrai2[tamano];
    int iguales = 0;

    for (int i = 0; i < tamano; i++) {
        cout << "Ingrese el numero " << i + 1 << " para el primer arrai: ";
        cin >> arrai1[i];
    }

    for (int i = 0; i < tamano; i++) {
        cout << "Ingrese el numero " << i + 1 << " para el segundo arrai: ";
        cin >> arrai2[i];
    }

    for (int i = 0; i < tamano; i++) {
        if (arrai1[i] == arrai2[i]) {
            iguales++;
        }
    }

    cout << "Numero de elementos iguales en las mismas posiciones: " << iguales << endl;

    return 0;
}

