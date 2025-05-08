#include <iostream>
#include <string>
using namespace std;

struct Servidor {
    string rendimiento;
    string seguridad;
    string ubicacion;
};

int main() {
    Servidor servidores[3] = {
        {"Alto", "Firewall Avanzado", "Data Center A"},
        {"Medio", "Cifrado SSL", "Data Center B"},
        {"Bajo", "Antivirus Activo", "Data Center C"}
    };

    cout << "Datos de los servidores:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Servidor " << i + 1 << ":" << endl;
        cout << "Rendimiento: " << servidores[i].rendimiento << endl;
        cout << "Seguridad: " << servidores[i].seguridad << endl;
        cout << "Ubicación: " << servidores[i].ubicacion << endl;
    }

    return 0;
}

