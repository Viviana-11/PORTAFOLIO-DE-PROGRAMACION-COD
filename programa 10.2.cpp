#include <iostream>
#include <string>
using namespace std;

struct Carpeta {
    string color;
    string forma;
    string material;
};

int main() {
    Carpeta carpetas[3] = {
        {"Rojo", "Rectangular", "madera"},
        {"Azul", "Cuadrada", "Plástico"},
        {"Verde", "Ovalada", "Metal"}
    };

    cout << "Datos de las carpetas:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nCarpeta " << i + 1 << ":" << endl;
        cout << "Color: " << carpetas[i].color << endl;
        cout << "Forma: " << carpetas[i].forma << endl;
        cout << "Material: " << carpetas[i].material << endl;
    }

    return 0;
}

