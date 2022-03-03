#include <iostream>

using namespace std;

int main(){
	int n, suma = 0;
	cout<<"Digite un numero :"; cin>>n;
	
	for(int i=1; i<=n; i++){
		suma += i;
	}
	
	cout<<"\nSuma "<<n<<": "<<suma<<endl;
}
