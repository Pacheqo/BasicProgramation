/* /* En este ejercicio de hará uso del operador lógico ( || ). Este operador verifica
si almenos una de las afirmaciones es cierta. Los operadores lógicos actúan como booleanos,
es decir, puede ser 1 si es verdadero y 0 si es falso */

#include <iostream>
using namespace std;

int main() {
	int x = 7;
	int y = 10;
	cout << (x > 15 || x > 8 || x > y) << endl; // Todas son falsas, por lo tanto, es falso (0)
	cout << (x < 15 || x < 8 || x > y); // Todas NO son falsas, por lo tanto, es verdadero (1)
	
	return 0;
}
