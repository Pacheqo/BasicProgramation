/* Este ejercicio, a diferencia del anterior ejemplo de switch, contiene el componente "default".
Default indica que, en caso de no cumplirse nungún caso en los bloques de switch, por defecto, se 
ejecutará el código haya en el bloque de default. */
#include <iostream>
using namespace std;

int main() {
	
	int day = 4;
	switch (day) {
		case 6:
			cout << "Hoy es Jueves";
    		break;
    		
		case 7:
			cout << "Hoy es Martes";
      		break;
      		
    	default:
			cout << "Esperando el fin de semana";
  }
  return 0;
}

