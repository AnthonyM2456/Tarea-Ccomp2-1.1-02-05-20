#include "iostream"

using namespace std;

int integerpower(int base, int exp){
	
	int resultado = 1;
	if(exp == 0){
		resultado = 1;
	}
	while(exp >= 1){
		resultado = resultado * base;
		exp = exp - 1;
	}
	
	return resultado;
}
int main(){
	
	int base, exp;
	cout << "digite un numero(base): "; cin >> base;
	cout << "digite un numero(exponente): "; cin >> exp;
	cout << integerpower(base, exp);
	

	return 0;
}
