#pragma once
#include "Atleta.h"
// Es la evolucion de la clase carrera
//ejercicio 3.d ahora almacenando un array atleta
class Carrera2
{
private:
	int distancia;
	// array de atletas
	Atleta** competidores;
	int cantAtletas;
	int indice;
public:
	Carrera2(int d, int cantidad);
	int getDistancia(void) const;
	Atleta *getGanador(void) const;
	int getCantAtletas(void) const;
	void agregarAtleta(Atleta* p);
	~Carrera2(void);
};
