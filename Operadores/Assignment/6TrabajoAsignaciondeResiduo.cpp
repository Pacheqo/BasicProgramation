/* En este ejercicio se hará uso del operador Asignación de Residuo ( %= ). Este operador
indica el residuo de la división entre una variable y un valor */
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
