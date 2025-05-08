#include <iostream>
#include <string>
using namespace std;

struct Estadistica {
    string tipoDeDato;
    string tamano;
    string formato;
};

int main() {
    Estadistica estadistica[3] = {
        {"Texto", "500 KB", "CSV"},
        {"Imagen", "2 MB", "PNG"},
        {"Audio", "5 MB", "MP3"}
    };

    cout << "Datos de la variable estadistica:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Variable " << i + 1 << ":" << endl;
        cout << "Tipo de dato: " << estadistica[i].tipoDeDato << endl;
        cout << "Tamaño: " << estadistica[i].tamano << endl;
        cout << "Formato: " << estadistica[i].formato << endl;
    }

    return 0;
}

