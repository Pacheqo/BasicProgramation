/* En este ejercicio se har� uso de for para Loop.
De aqu� es posible rescatar las siguientes instrucciones en el par�ntesis de for:
	- Statement 1 is executed (one time) before the execution of the code block
	- Statement 2 defines the condition for executing the code block
	- Statement 3 is executed (every time) after the code block has been executed */
#include <iostream>
using namespace std;

int main() {
	
	for (int i = 0; i <= 5; i++) {
		cout << i << "\n";
	}
	
	return 0;
}
