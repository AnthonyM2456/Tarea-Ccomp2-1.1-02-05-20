#include "iostream"

using namespace std;

int main(){
	
	int cant = 0, x = 0, min = 10000000;
	cout << "Cantidad de numeros: "; cin >> cant;
	

	for(int i=0; i<cant; i++){
		
		cout << "Escriba el numero: ";
		cin >> x;

		if(min > x){
			min = x;
		}
		else{
			x = min;
		}	
	}

	cout << "El numero menor es: " << x;
	
	
	
	
	
	return 0;
}
