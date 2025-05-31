#include <iostream>
using namespace std;
int potencia(int base , int n ){
	if (n==0){
		return  0;
	}
	return base*potencia(base * n-1);
}
int main (){
	int base , exponente;
	cout <<"ingrese base";
    cin >>base;
    cout <<n ;
    int resultado=potencia(base*n);
    cout<< "el resultado es " <<resultado<<endl ;
    return 0;
	
}