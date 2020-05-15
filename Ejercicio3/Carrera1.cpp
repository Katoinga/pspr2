#include "Carrera1.h"
#include <iostream>
// Constructor
Carrera1::Carrera1(int d, Atleta* g)
{
	distancia = d;
	ganador = g;
}
// Metodos de carrera1
int Carrera1::getDistancia(void) const
{
	return distancia;
}
// retorna el ganador
Atleta * Carrera1::getGanador(void) const
{
	return ganador;
}
Carrera1::~Carrera1(void)
{
	ganador = NULL;
}