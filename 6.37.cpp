#include "iostream"

using namespace std;

int fibonacci(int t){
	
	int a = 0, b = 1, c = 1;
	
	cout << a << ", " << b << ", ";
	for(int i = 0; i <= t; i++){
		
		c = a + b;
		cout << c << ", ";
		a = b; b = c;		
		
	}
	
}
int main(){
	
	int t;
	cout << "cantidad de terminos: "; cin >> t;
	cout << fibonacci(10);
	return 0;
}
