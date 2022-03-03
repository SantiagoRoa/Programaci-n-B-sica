#include <iostream>

using namespace std;

int main(){
	float a, b, resultado = 0;
	
	cout<<"Digite el valor de a: "; cin>> a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	swap(a,b);
	cout<<"\nIntercambiadas"<<endl;
	cout<<"\na: "<<a<<endl;
	cout<<"\nb: "<<b<<endl;
	
	return 0;
}
