#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int exp, digito, binario, decimal;
        
	cout << "Introduce numero: "; cin >> binario;
   
	exp=0;
   
	decimal=0;
   
	while(binario != 0){
   	
        digito = binario % 10;
        decimal = decimal + digito * pow(2,exp);
        exp++;
        binario = binario/10;
        
    }
     
   cout << decimal << endl; 
   
   return 0;
}
