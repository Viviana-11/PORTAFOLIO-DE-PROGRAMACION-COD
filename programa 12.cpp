 #include <iostream>
 using namespace std;
 struct Persona {
 string nombre;
 int edad;
 void saludar() {
 cout << "Hola, mi nombre es "
 << nombre << " y tengo "
 << edad << " anos."
 << endl;
 }
 };
 int main() {
 Persona* ptrPersona = new Persona();
 ptrPersona->nombre = "Juan";
 ptrPersona->edad = 30;
 cout << "Nombre: " << ptrPersona->nombre <<endl;
 cout << "Edad: " << ptrPersona->edad <<endl;
 ptrPersona->saludar();
 delete ptrPersona;
 return 0;
 }
