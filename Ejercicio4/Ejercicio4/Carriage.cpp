#include <iostream>
#include "Carriage.h"
using namespace std;
//recibe el valor si es primera clase o no
//los asientos los inicializa a todos en 0
Carriage::Carriage(bool prim) {
	primera = prim;
	for (int i = 0; i < 40; i++) {
		asientos[i] = 0;
	}
}
// Halla la probablilidad de que sea ocupado
// llena el asiento con true o false
// obtiene un random y si es menor que 'probabilidad'
// es porque esta dentro de la probabilidad de ser ocupado
void Carriage::ocupar() {
	double probabilidad = primera ? 0.1 : 0.4;
	for (int i = 0; i < 40; i++) {
		asientos[i] = double(rand()) / RAND_MAX < probabilidad;
	}
}
// muestra cada asiento si esta ocupado o no recorriendo con un for
void Carriage::mostrar() {
	for (int i = 0;i < 40;i++) {
		if (asientos[i] == true) {
			cout << "Asiento" << i << "Ocupado\n";

		}
		else {
			cout << "Asiento" << i << "Desocupado\n";
		}
	}
}
