#include <iostream>
using namespace std;

int main() {
	int myNum = 15; //Int define una variable
	cout << "Hola, este es mi primer code :) \n" << endl; //Para hacer espacio entre l�neas, puede utilizarse "\n" (newline) y endl. Digitar "\n\n" har� dos espacios entre l�neas
	cout << myNum << "\n";
	
	myNum = 10; //Aqu� el n�mero de la variable cambia
	cout << myNum << endl;
	
	bool myBoolean = false;
	cout << myBoolean << endl; //Definir Boolean como true es igual a 1 y false igual a 0
	
	double myDecimal = 5.99; //Double funciona para definir n�meros decimales
	cout << myDecimal << endl;
	
	char myLetter = 'M'; //Char utiliza comillas sencillas (' ')
	cout << myLetter << "\n";
	
	string myText = "Puro texto, mi rey"; //Literalmente puro texto
	cout << myText << endl;

	int a = 15;
	int b = 10;
	int sum = a + b;
	cout << sum << endl;
	
	int x = 1, y = 2, z = 50; //El uso de la coma puede definir diferentes variables simultaneamente
	cout << x << "\t" << y << "\t" << z;
	return 0;
}
