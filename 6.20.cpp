#include "iostream"

using namespace std;

bool isfactor(int x, int y){
	
	if(y % x == 0){
		
		return true;
		
	}
	else{
		
		return false;
		
	}	
}
int main(){
	
	int x, y;
	cout << "Digite un numero: "; cin >> x;
	cout << "Digite un numero mayor: "; cin >> y;
	if(isfactor(x,y)){
		cout << "verdadero; " << x << " es factor de " << y;
	}
	else{
		cout << "falso; " << x << " no es factor de " << y;
	}
	
	
	return 0;
}
