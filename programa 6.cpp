#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int tamano = 100;
    int arrai[tamano];
    int cantidadPrimos = 0;
    for (int i = 0; i < tamano; i++) {
        arrai[i] = rand() % 500 + 1;
    }
    for (int i = 0; i < tamano; i++) {
        int numero = arrai[i];
        int esprimo = 1; 
        if (numero <= 1) {
            esprimo = 0;
        } else {
            for (int j = 2; j * j <= numero; j++) {
                if (numero % j == 0) {
                    esprimo = 0;
                    
                }
            }
        }

        if (esprimo == 1) {
        cantidadPrimos++;
        }
    }
    cout << "Hay " << cantidadPrimos << " numeros primos." << endl;
    return 0;
}

