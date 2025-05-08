#include <iostream>
#include <string>
using namespace std;

struct Lapicero {
    string marca;
    string color;
    string tipo;
};

int main() {
    Lapicero lapiceros[3] = {
        {"Layconza", "Azul", "Bolígrafo"},
        {"Faber-Castell", "Rojo", "Marcador"},
        {"Vinifan", "Negro", "Gel"}
    };

    cout << "Datos de los lapiceros:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nLapicero " << (i + 1) << ":" << endl;
        cout << "Marca: " << lapiceros[i].marca << endl;
        cout << "Color: " << lapiceros[i].color << endl;
        cout << "Tipo: " << lapiceros[i].tipo << endl;
    }

    return 0;
}
