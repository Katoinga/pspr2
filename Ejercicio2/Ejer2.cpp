
#include <iostream>
#include "clase.h"


using namespace std;


int main(void) {
	Tanque t;
	t.agregar(100);
	while (t.getContenido() >= 1.0) {
		t.sacaMitad();
		cout << "Se redujo la mitad ahora queda " << t.getContenido()<<"\n";
	}
	return 0;
}