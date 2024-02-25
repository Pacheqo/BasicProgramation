/* En este ejercicio se hará uso del operador ( |= ). Este operador
realiza la operación de OR bit a bit entre una variable y un valor */
#include <iostream>
using namespace std;

int main() {
	int x = 5;
	x |= 3;
	cout << x;
	
	// El siguiente ejercicio es otra forma de describir al anterior
	
	int y = 5;
	y = y | 3;
	cout << "\n" << y;
	
	return 0;
}
