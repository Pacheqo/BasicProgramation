/* En este ejercio se usará el tipo de dato "char". Char es utilizado para almacenar UN SOLO carácter */
#include <iostream>
using namespace std;

int main() {
	char miNota = 'A'; // char requiere el uso de comillas simples (' ') al definir el cáracter
	cout << miNota << endl;
	
/* char también utililza ASCII, por lo que al utilizar un valor en la tabla ASCII se mostrará cierto carácter */
	
	char a = 50; // 50 en la tabla ASCII es igual al número " 2 "
	char b = 60; // 60 en la tabla ASCII es igual al cáracter " < "
	char c = 55; // 55 en la tabla ASCII es igual al número " 7 "
	
	cout << a  << b << c; // Por lo tanto, esto se vería como: 2<7
	return 0;
}
