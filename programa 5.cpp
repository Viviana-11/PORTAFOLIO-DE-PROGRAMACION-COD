#include <iostream> 
using namespace std;
int main (){
	int tamano=30;
	int suma = 0;
	int arrai[tamano];
	for(int i;i<tamano;i++){
	cout<<"ingrese un numero";
	cin>>arrai[i];
	suma=suma+arrai[i];
}
	int promedio =suma/tamano;
	cout<<promedio;
	return 0;
}