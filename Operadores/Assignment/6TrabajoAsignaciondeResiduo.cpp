/* En este ejercicio se har� uso del operador Asignaci�n de Residuo ( %= ). Este operador
indica el residuo de la divisi�n entre una variable y un valor */
#include <iostream>
using namespace std;

int main() {
	int x = 13;
	x %= 3;
	cout << x;
	
	// El siguiente ejercicio es otra forma de describir al anterior
	
	int y = 13;
	y = y % 3;
	cout << "\n" << y;
	
	return 0;
}
