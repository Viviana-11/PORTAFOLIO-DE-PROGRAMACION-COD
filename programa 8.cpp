#include <iostream>
using namespace std;

int main() {
    const int tamano = 20;
    int arrai[tamano];


    for (int i = 0; i < tamano; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> arrai[i];
    }

    cout << "Frecuencia de aparición de cada numero "<<endl;
    for (int i = 0; i < tamano; i++) {
        int contador = 0; 

        for (int j = 0; j < tamano; j++) {
            if (arrai[i] == arrai[j]) {
                contador++; 
            }
        }

        if (contador > 0) {
            cout << "El numero " << arrai[i] << " aparece " << contador << " vez/veces." << endl;
            for (int j = 0; j < tamano; j++) {
                if (arrai[i] == arrai[j]) {
                    arrai[j] = -1; 
                }
            }
        }
    }

    return 0;
}

