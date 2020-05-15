#pragma once
#include <iostream>

class Sala {
	char* nombre;
	int largo;
	int ancho;
	bool equipado;
public:
	Sala(const char* n, int a, int l, bool e);
	const char* getNombre(void) { return nombre; }
	int getLargo(void) { return largo; }
	int getAncho(void) { return ancho; }
	bool getEquipado(void) { return equipado; }
	int hallarArea(void) { return ancho * largo; }
	int hallarCapacidad();
	int hallarAlquiler(void);
	void mostrarDatos(void);
	~Sala(void);
};