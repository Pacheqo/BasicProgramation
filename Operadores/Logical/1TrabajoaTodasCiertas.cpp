/* /* En este ejercicio de hará uso del operador lógico ( && ). Este operador verifica
si todas afirmaciones son ciertas. Los operadores lógicos actúan como booleanos, es decir,
puede ser 1 si es verdadero y 0 si es falso */

#include <iostream>
using namespace std;

int main() {
	int x = 7;
	int y = 10;
	cout << (x < 15 && x < 8 && x < y) << endl; // Todas son ciertas, por lo tanto, es verdadero (1)
	cout << (x < 15 && x < 8 && x > y) << endl; // Todas NO son ciertas, por lo tanto, es falso (0)
	
	return 0;
}
