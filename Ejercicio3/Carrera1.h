#pragma once
#include "Atleta.h"
// Es la evolucion de la clase carrera
//ejercicio 3.c ahora almacenando un atleta
class Carrera1
{
private:
	int distancia;
	Atleta *ganador;
public:
	Carrera1(int d, Atleta *g);
	int getDistancia(void)const;
	Atleta * getGanador(void) const;
	~Carrera1(void);
};
