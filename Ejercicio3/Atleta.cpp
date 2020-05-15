#include "Atleta.h"
#include <string.h>
#include <iostream>

using std::cout;
//Constructor
Atleta::Atleta(const char* n, int nro, const char* p, double t)
{
	nombre = new char[strlen(n) + 1];
	strcpy_s(nombre, strlen(n) + 1,n);
	numero = nro;
	nacionalidad = new char[strlen(p) + 1];
	strcpy_s(nacionalidad, strlen(p) + 1,p);
	tiempo = t;
}
// Metodos del objeto retornan atributos
char* Atleta::getNombre(void) const
{
	return nombre;
}
int Atleta::getNumero(void) const
{
	return numero;
}
char* Atleta::getNacionalidad(void) const
{
	return nacionalidad;
}
double Atleta::getTiempo(void)const
{
	return tiempo;
}
// va imprimiendo cada atributo de la clase
void Atleta::mostrarDatos(void) const
{
	cout << "Nombre atleta: " << nombre << "\nNumero: " << numero << "\nNacionalidad:"
		<< nacionalidad <<"\nTiempo: " <<tiempo<< "\n";
}
//se copia la cadena con strcpy_s(destino, tamano, cadena que se va a copiar)
void Atleta::setNombre(char* n)
{
	if (nombre == NULL) {
		nombre = new char[strlen(n) + 1];
		strcpy_s(nombre, strlen(n) + 1,n);
	}
}
void Atleta::setNumero(int n)
{
	numero = n;
}
void Atleta::setTiempo(double t)
{
	tiempo = t;
}
// se copia la cadena con strcpy_s
void Atleta::setNacionalidad(char* p)
{
	if (nacionalidad == NULL) {
		nacionalidad = new char[strlen(p) + 1];
		strcpy_s(nacionalidad, strlen(p) + 1, p);
	}
}
Atleta::~Atleta(void)
{
	delete[] nombre;
	delete[] nacionalidad;
	cout << "Se invoca al destructor de atleta\n";
}