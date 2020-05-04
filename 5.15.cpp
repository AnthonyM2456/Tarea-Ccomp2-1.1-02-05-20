#include "iostream"
using namespace std;

int main(){
	//a
	int n = 10;
	for (int i = 0; i <= n; i++){
		
		for(int j = 0; j < i+1; j++){
			
			cout << "*";
					
		}
	
		cout << "\n"; 
	}
	//b
	
	for(int i = 1; i <= n; i++){
		
		for(int j = i; j <= n; j++){
			
			cout << "*";
		}
        
        cout << "\n";
        
    }
	
	//c
	
	for(int i = n; i >= 0; i--){
		
        for(int j = n; j >= i; j--){
        	
            cout << " ";
            
        }
        for(int j = 0; j < i; j++){
        	
            cout << "*";
            
        }
        
        cout << "\n";
        
    }
	//d
	for(int i = 0; i<= n; i++){
		
		for(int j = n; j > i; j--){
			
			cout << " ";
			
		}
		
		for(int j = 0; j <= i; j++){
			
			cout << "*";
				
		}
		
		cout << "\n";
		
	}
	
	
	
	return 0;
}
