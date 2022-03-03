#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	int numero, dato, contador = 0;
	
	srand(time(NULL));
	dato = 1 + rand()%(100);
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		if(numero>dato){
			cout<<"\nDigite un numero menor\n";
 		}
 		if(numero<dato){
 			cout<<"\nDigite un numero mayor\n";
		}
		contador++; 
	}while(numero!= dato);
	
	cout<<"Adivinó el número, intentos: "<<contador<<endl;
	
	return 0;
}
