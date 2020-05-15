#include <iostream>
#include "Carriage.h"
#include "Train.h"
using namespace std;

int main() {
	//4. a) Siendo de primera clase(true)
	cout << "A.Primera\n\n";
	Carriage c1(true);
	c1.ocupar();
	c1.mostrar();
	//4. a) Siendo de segunda clase(false)
	cout << "\n\nA.Segunda\n\n";
	Carriage c2(false);
	c2.ocupar();
	c2.mostrar();
	//4. b)
	cout << "B.";
	// 3 vagones de primera y 7 de segunda
	// de Arequipa a Lima
	//le pondremos primera clase coste 25 y segunda 10
	Train t(3, 7, "Arequipa", "Lima", 25, 10);
	t.llenar();
	cout << "El viaje de ha salido";
	cout << endl << endl << "Numero total de ventas en tickets: "<<t.totalVentas() << endl;
}
