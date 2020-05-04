#include <iostream>

using namespace std;
int main(){
	
	int num{0}, x{0}, y{0}, z{0};
	
	cout << "digite un numero: "; cin >> num;
	
	x = num;
	
	while(x!=0){
				
		y = x % 10;
		x = x / 10;
		z = (z * 10) + y;
		
	}
		if(z==num){
			cout << "El numero es palindromo\n";
		}
		else{
			cout << "no es palidromo";
		}
			
	return 0;
}
