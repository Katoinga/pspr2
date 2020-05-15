

#include <iostream>
#include "Candado.h"

using namespace std;
int main()
{

	int p1[] = {1,5,3};
	int p2[] = {8,2,6};
	Candado c1 = Candado(p1);
	Candado c2 = Candado(p2);
	//cambiando digito
	c1.alterarDigito(1, 4);
	if (c2.puedeAbrir()) {
		cout << "El candado se puede abrir\n";
	}
	else {
		cout << "El candado no se puede abrir\n";
	}
	if (c1.mismaCombActual(c2)) {
		cout << "Los dos candados si tienen la misma combinacion actual\n";
	}
	else {
		cout << "Los dos candados no tienen la misma combinacion actual\n";
	}
	return 0;
}
