#include <iostream>
#include <string>
using namespace std;

struct CableUTP {
    string categoria;
    string velocidad;
    float longitud; 
};

int main() {
    CableUTP cables[3] = {
        {"Cat5e", "1 Gbps", 10.0},
        {"Cat6", "10 Gbps", 20.5},
        {"Cat6a", "10 Gbps", 30.0}
    };

    cout << "Datos de los cables UTP:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nCable UTP " << i + 1 << ":" << endl;
        cout << "Categoría: " << cables[i].categoria << endl;
        cout << "Velocidad: " << cables[i].velocidad << endl;
        cout << "Longitud: " << cables[i].longitud << " metros" << endl;
    }

    return 0;
}

