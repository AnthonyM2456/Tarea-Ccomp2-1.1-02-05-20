#include "iostream"

using namespace std;

int main(){
	
	int lado;
	
	cout << "Cuantos asteriscos tendra el lado del cuadrado:\n"; cin >> lado;
	
	for (int i = 0; i < lado; i++){
		for (int j = 0; j < lado; j++){
			if (i == 0 || j == 0 || i == lado - 1 || j == lado -1){
				
				cout << "*";
				
			}
			else{
				
				cout << " ";
				 
			}			
		}
		cout << endl;
	}
		
	return 0;
}
