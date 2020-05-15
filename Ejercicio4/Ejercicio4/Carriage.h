#pragma once
#include <iostream>

class Carriage {
	bool asientos[40];
	bool primera;
public:
	Carriage() {};
	Carriage(bool prim);
	bool getAsiento(int ind) { return asientos[ind]; }
	bool getPrimera() { return primera; }
	void setPrimera(bool p) { primera = p; }
	void ocupar();
	void mostrar();
};