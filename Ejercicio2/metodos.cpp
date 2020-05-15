// este archivo contiene los metodos
#include <iostream>
#include "clase.h"
using namespace std;
Tanque::Tanque(void) {
	contenido = 0;
}

double Tanque::getContenido(void)const {
	return contenido;
}
void Tanque::agregar(double cantidad) {
	if (cantidad + contenido <= capacidad) {
		contenido += cantidad;
	}
	else {
		cout << "Si se agrega eso supera la capacidad";
	}
}
void Tanque::sacar(double cantidad) {
	if (contenido - cantidad < 0) {
		cout << "No se dispone de esa cifra";
	}
	else {
		contenido -= cantidad;
	}
}
void Tanque::sacaMitad() {
	if (contenido != 0) {
		contenido = contenido / 2;
	}
}
Tanque::~Tanque(void) {}

