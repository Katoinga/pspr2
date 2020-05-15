// este archivo contiene los metodos de la clase persona

#include <iostream>
#include "clase.h"

using namespace std;

// Declaracion de funciones de la clase

// Metodos que imprimen el nombre concatenado a la accion que se requiera
void Persona::dormir()
{
	cout << nombre << " esta durmiendo" << endl;
}

void Persona::hablar()
{
	cout << nombre << " esta hablando contigo" << endl;
}

void Persona::contar()
{
	cout << nombre << " esta contando.... 1,2,3,4.....etc." << endl;
}

void Persona::adquirirNombre()
{
	cout << "Soy una persona, ingrese mi nombre: ";
	cin >> nombre;
}

void Persona::decirNombre()
{
	cout << "Mi nombre es: " << nombre << endl;
}


