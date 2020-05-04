#include <iostream>
#include <math.h>
using namespace std;

int timeMinut(int m, int d, int h){
	
	return 43800 * m + 1440 * d + 60*h;

}

int main(){
	
	int m, d, h, tiempo1, tiempo2;
	
	cout << "Ingrese la primera fecha en Mes -- Dia -- Hora: "; cin >> m >> d >> h;
	
	tiempo1 = timeMinut(m, d, h);
	
	cout << "Ingrese la segunda fecha en Mes -- Dia -- Hora (Mayora la primera fecha introducida): "; cin >> m >> d >> h;
	
	tiempo2 = timeMinut(m, d, h);
	
	cout << "La diferencia entre la segunda fecha y la primera fecha es: " << tiempo2 - tiempo1 << endl;
	
	return 0;
}

