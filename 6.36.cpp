#include <iostream>

using namespace std;
int power(int base, int exp){

	if (exp == 0){
		return 1;
	}
	if (exp == 1){
		return base;
	}
	else{
		base = base * power(base,exp - 1);
		return base;
	}
}

int main(){

	int base, exp;
	cout << "Digite una base: "; cin >> base;
	
	cout << "Digite un exponente: "; cin >> exp;
	
	cout << base << " elevado a " << exp << " resulta " << power(base, exp) << endl;
	return 0;
}
	
