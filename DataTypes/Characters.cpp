/* En este ejercio se usar� el tipo de dato "char". Char es utilizado para almacenar UN SOLO car�cter */
#include <iostream>
using namespace std;

int main() {
	char miNota = 'A'; // char requiere el uso de comillas simples (' ') al definir el c�racter
	cout << miNota << endl;
	
/* char tambi�n utililza ASCII, por lo que al utilizar un valor en la tabla ASCII se mostrar� cierto car�cter */
	
	char a = 50; // 50 en la tabla ASCII es igual al n�mero " 2 "
	char b = 60; // 60 en la tabla ASCII es igual al c�racter " < "
	char c = 55; // 55 en la tabla ASCII es igual al n�mero " 7 "
	
	cout << a  << b << c; // Por lo tanto, esto se ver�a como: 2<7
	return 0;
}
