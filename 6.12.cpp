#include "iostream"

using namespace std;

int CalculateCharges(float x){ //x son las horas //y es el costo de parqueo
	
	float y;
	if(x <= 3){
		
		y = 20;
			
	}
	if(x > 3 and x < 24){
		
		y = 20 + 5 * (x - 3);
		
			
	}
	if (x / 24 >= 1){
		
		y = 50 * (x / 24);
			
	}	
	return y;
}
int main(){
	
	int x, y, z;
	x = CalculateCharges(1.5);
	y = CalculateCharges(4.0);
	z = CalculateCharges(24.0);
	
	
	
	
	
	
	cout << "Car" << "\t" << "Hours" << "\t" << "Charge" << "\n";
	cout << "1" << "\t" << "1.5" << "\t" << x  << ".00" << "\n";
	cout << "2" << "\t" << "4.0" << "\t" << y << ".00" << "\n";
	cout << "3" << "\t" << "24.0" << "\t" << z << ".00" << "\n";
	cout << "TOTAL" << "\t" << "29.5" << "\t" << x + y + z << ".00"<< "\n";
	
	
	return 0;
}
