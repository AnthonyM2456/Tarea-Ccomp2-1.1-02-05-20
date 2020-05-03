#include "iostream"

using namespace std;

int invers(int x){
	
	int z, y;
	while(x!=0){
				
		y = x % 10;
		x = x / 10;
		z = (z * 10) + y;
		
	}
	return z;
}
int main(){
	int x;
	cout << "Digite un numero para invertirlo: "; cin >> x;
	cout << "El numero invertido es: " << invers(x);
	
	
	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

