#include <iostream>

using namespace std;

int main(){
	long long int n, x=0,y=1,z=1;
	
	cout<<"Ingrese el numero de fibonacci: "; cin>>n;
	
	cout<<"1 ";
	for(int i=1;i<n;i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;
	}
	
	cout<<"\nNumero "<<n<<" de fibonacci: "<<z;
	
	return 0;
}
