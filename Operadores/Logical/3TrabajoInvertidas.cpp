/* /* En este ejercicio de har� uso del operador l�gico ( ! ). Este operador invierte el resultado de la afirmaci�n,
es decir, si la afirmaci�n es verdadera, se convierte en falsa. Los operadores l�gicos act�an como booleanos, es decir,
puede ser 1 si es verdadero y 0 si es falso */

#include <iostream>
using namespace std;

int main() {
	int x = 7;
	int y = 10;
	cout << !(x < 15) << endl; // Es verdadero, por lo tanto, es falso (0)
	cout << (!(x < 10 && x > 15)) << endl; // Es falso, por lo tanto, es verdadero (1)
	cout << (!(x < 10 || x > 15)); // Es verdadero, por lo tanto, es falso (0)
	
	return 0;
}
