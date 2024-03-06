/* En este ejercicio se hará uso de instruicción "switch". A mi entender, switch contiene una variable y dependiendo del su valor,
se ejecutará un bloque de código u otro. */
#include <iostream>
using namespace std;

int main() {
	
	int day = 3	;
	switch (day) {
	case 1:
    	cout << "Monday";
    	break;
    	
	case 2:
    	cout << "Tuesday";
    	break;
    	
	case 3:
    	cout << "Wednesday";
    	break;
    	
	case 4:
    	cout << "Thursday";
    	break;
    	
	case 5:
    	cout << "Friday";
    	break;
    	
	case 6:
    	cout << "Saturday";
    	break;
    	
	case 7:
    	cout << "Sunday";
    	break;
  }
  return 0;
}
