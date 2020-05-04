#include "iostream"

using namespace std;

bool Nprimo(int x){

	if(x == 1){		
		return false;	
	}
	
	if(x == 2){
		return true;
	}
	
	for(int i = 2; i <= x/2; i++){
		if(x % i == 0){
			return false;	
		}
	}
		
	return true;
			
}

int main(){
	
	int x;
	
	for(x = 1; x <= 10000; x++){
		if(Nprimo(x)){
			cout << x;
		}
		else{
			cout << " ";
		}
	}
	
	return 0;
	
}
