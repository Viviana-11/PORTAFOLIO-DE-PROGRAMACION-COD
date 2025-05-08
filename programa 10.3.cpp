#include <iostream>
#include <string>
using namespace std;

struct Silla {
    float altura;
    float anchura;
    string forma;
};

int main() {
    Silla sillas[3] = {
        {1.2, 0.5, "Cuadrada"},
        {1.0, 0.6, "Redonda"},
        {1.3, 0.55, "Ergonomica"}
    };

    cout << "Datos de las sillas:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nSilla " << i + 1 << ":" << endl;
        cout << "Altura: " << sillas[i].altura << " metros" << endl;
        cout << "Anchura: " << sillas[i].anchura << " metros" << endl;
        cout << "Forma: " << sillas[i].forma << endl;
    }

    return 0;
}

