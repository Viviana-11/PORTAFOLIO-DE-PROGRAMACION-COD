 #include <iostream>
#include <string>
using namespace std;

struct Curso {
    string nombre;
};

struct Nodo {
    Curso curso;
    Nodo* siguiente;
};

void agregarCurso(Nodo*& cabeza, Curso nuevoCurso) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->curso = nuevoCurso;
    nuevoNodo->siguiente = nullptr;
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    } else {
        Nodo* temp = cabeza;
        while (temp->siguiente != nullptr) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

void imprimirCursos(Nodo* cabeza) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        cout << temp->curso.nombre;
        if (temp->siguiente != nullptr) {
            cout << " -> ";
        }
        temp = temp->siguiente;
    }
    cout << endl;
}

int main() {
    Nodo* listaCursos = nullptr;

    agregarCurso(listaCursos, {"Analisis y diseno de algoritmos"});
    agregarCurso(listaCursos, {"Estructura de datos"});
    agregarCurso(listaCursos, {"Sistemas de gestion de bases de datos I"});
    agregarCurso(listaCursos, {"Sistemas de gestion de bases de datos II"});
    agregarCurso(listaCursos, {"Gestion de proyectos TICs"});
    agregarCurso(listaCursos, {"Ingenieria de software I"});
    agregarCurso(listaCursos, {"Ingenieria de software II"});
    agregarCurso(listaCursos, {"Internet de las cosas y computación en la nube"});
    agregarCurso(listaCursos, {"Taller de tesis"});

    cout << "Ruta de cursos: ";
    imprimirCursos(listaCursos);

    return 0;
}
