#include "iostream"
#include "cmath"

using namespace std;

bool Nprimo(int x){
		
	if(x == 1){		
		return false;	
	}
	if(x == 2){
		return true;
	}
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			return false;	
		}
	}
	
	return true;
		
}

int main(){
	
	int x;
	
	cout << "Digite un numero: "; cin >> x;
	
	if(Nprimo(x)){
		
		cout << x << " si es primo.";
		
	}
	
	else{
		
		cout << x << " no es primo.";
		
	}

	return 0;
	
}
