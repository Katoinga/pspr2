
#include "Carrera.h"
#include <string.h>
// Constructor
Carrera::Carrera(int d, const char* g)
{
	distancia = d;
	ganador = new char[strlen(g) + 1];
	strcpy_s(ganador, strlen(g) + 1, g );
}
// Metodos de la clase carrera
int Carrera::getDistancia(void) const
{
	return distancia;
}
char* Carrera::getGanador(void) const
{
	return ganador;
}
Carrera::~Carrera(void)
{
	delete[] ganador;
}