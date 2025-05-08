#include <iostream>
#include <string>
using namespace std;

struct Laptop {
    int almacenamiento; 
    string marca;
    string procesador;
};

int main() {
    Laptop laptops[3] = {
        {512, "Dell", "Intel Core i7"},
        {256, "HP", "AMD Ryzen 5"},
        {1024, "Lenovo", "Intel Core i9"}
    };

    cout << "Datos de las laptops:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nLaptop " << i + 1 << ":" << endl;
        cout << "Almacenamiento: " << laptops[i].almacenamiento << " GB" << endl;
        cout << "Marca: " << laptops[i].marca << endl;
        cout << "Procesador: " << laptops[i].procesador << endl;
    }

    return 0;
}

