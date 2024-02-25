/* En este ejercicio se hará uso del operador ( >>= ). Este operador
desplaza la cantitad de bits a la derecha según el valor a la variable en binario */
#include <iostream>
using namespace std;

int main() {
	int x = 5;
	x >>= 3;
	cout << x;
	
	// El siguiente ejercicio es otra forma de describir al anterior
	
	int y = 5;
	y = y >> 3;
	cout << "\n" << y;
	
	return 0;
}
