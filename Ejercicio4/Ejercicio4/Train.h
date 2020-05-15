#pragma once
#include <iostream>
#include "Carriage.h"
class Train {
	Carriage* carriages;
	int numPri;
	int numSeg;
	const char* salida;
	const char* destino;
	int precioPrimera;
	int precioSegunda;
public: //lista inicializadores
	Train(int nP, int nS, const char* sal, const char* dest, int pP, int pS) :
		numPri(nP), numSeg(nS), salida(sal), destino(dest), precioPrimera(pP),
		precioSegunda(pS) {
		carriages = new Carriage[nP + nS];
		for (int i = 0; i < nP + nS; i++) carriages[i].setPrimera(i < nP);
	};
	~Train() { delete[] carriages; }
	Carriage getCarriage(int i) { return carriages[i]; }
	void llenar();
	int totalVentas();
};