#include "Carrera2.h"
// Constructor
Carrera2::Carrera2(int d, int cantidad)
{
	distancia = d;
	cantAtletas = cantidad;
	competidores = new Atleta* [cantidad];
	indice = 0;
}// Metodos de carrera2
int Carrera2::getDistancia(void) const
{
	return distancia;
}
int Carrera2::getCantAtletas(void) const
{
	return cantAtletas;
}
// obtiene el ganador recorrienedo el arreglo y 
// sacando el que tenga menor tiempo
Atleta* Carrera2::getGanador(void) const
{
	double t = competidores[0]->getTiempo();
	double taux;
	int iaux;
	for (int i = 1;i < cantAtletas;i++) {
		taux = competidores[i]->getTiempo();
		if (taux < t) {
			t = taux;
			iaux = i;
		}
	}
	return competidores[iaux];
}
void Carrera2::agregarAtleta(Atleta* p)
{
	if (indice < cantAtletas) {
		competidores[indice] = p;
		indice++;
	}
}
Carrera2::~Carrera2(void)
{
	delete[] competidores;
}