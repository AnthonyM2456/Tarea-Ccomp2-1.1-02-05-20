#include "iostream"

using namespace std;

int main(){
	
	int i, j = 0;
	float pi = 0;
	
	for(i = 1; i <= 200000; i += 2){
		
		if(i == 1 or j == 4){
			
			pi = pi  + (4/(float)i);
			j = 2;
			
		}
		else{
			
			pi = pi - (4/(float)i);
			j = j + 2;
			
		}
			
	}
	cout << "El valor de pi es: " << pi;
	 	
	return 0;
}
