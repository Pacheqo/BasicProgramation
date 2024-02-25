/* En este ejercicio se hará uso del tipo de dato "string". String es utilizado para mostrar una secuancia de carácteres.
Para hacer uso de "string", debe de añadirse la librería <string>. */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string meses = "Agosto"; // string requiere el uso de comillas dobles (" ") al definir la secuencia
	cout << meses << "\n\n";
	
	string nombre = "Manuel!";
	string saludos = "¡Muy buenas noches, ";
	cout << saludos << nombre; // Como resultado de esta unión de string se obtiene: "¡Muy buenas noches, Manuel!"
	return 0;
}
