#include "iostream"

using namespace std;

int gcd(int x, int y){
	
	if(x < y){
		
		return gcd(y,x);
		
	}
	else{
		
		if(y == 0){
			
			return x;
			
		}
		else{
			
			return gcd(y, int(x%y));
			
		}
	}	
}
int main(){
	
	int x, y;
	cout << "ingresar el primer valor: "; cin >> x;
	cout << "ingresar el segundo valor: "; cin >> y;
	
	cout << "El MCD es: " << gcd(x,y);
	
	return 0;
}
