#include <iostream>

using namespace std;

int main(){
	
	long long int numero, factorial = 1;
	
	cout<<"Ingrese un numero: "<<endl; cin>>numero;
	
	for(int i = 1; i<=numero; i++){
		factorial *= i;
	}
	
	cout<<"\nEl factorial del numero es: "<<factorial<<endl;
	
	return 0;
}
