#pragma once
#include <iostream>

class Atleta
{
private:
	// arreglo de chars para usarlo como cadenas
	// char* arreglo
	char* nombre;
	int numero;
	char* nacionalidad;
	double tiempo;
public:
	Atleta(const char* n = NULL, int nro = 0, const char* p = NULL, double t = 0.0);
	char* getNombre(void) const;
	int getNumero(void) const;
	char* getNacionalidad(void) const;
	double getTiempo(void) const;
	void setNombre(char* n);
	void setNumero(int n);
	void setNacionalidad(char* n);
	void setTiempo(double t);
	void mostrarDatos(void) const;
	~Atleta(void);
};