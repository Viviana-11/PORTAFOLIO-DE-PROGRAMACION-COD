#include <iostream>
using namespace std;
int main (){
	int n ;
	string k;
	cin >>n;
for (int i= 0; i<n;i++){
	cin >>k;
	if(k.length() >10){
		cout <<k[0]<<k.length() -2<<k[k.length()-1]<<'\n';
	}
	else{
		cout << k << '\n';
	}
}
 return 0;
}





