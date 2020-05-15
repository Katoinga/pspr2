// ClasePersona.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include "clase.h"
#include "metodos.cpp"
using namespace std;

int main()
{

	int respuesta = 0;
	// Creando una persona y capturando su nombre
	cout << "Desea crear una persona? 1=SI o 2=NO";
	cin >> respuesta;

	if (respuesta == 1)
	{
		Persona p;
		p.adquirirNombre();

		// El usuario puede decidir si se muestra su nombre

		cout << "Desea que diga mi nombre? 1=SI ; 2=NO ";
		cin >> respuesta;

		if (respuesta == 1)
			p.decirNombre();
		
		// El usuario define si la persona habla

		cout << "Quiere escucharme hablar? 1=SI ; 2=NO ";
		cin >> respuesta;

		if (respuesta == 1)
			p.hablar();
		// El usuario define si la persona duerme
		cout << "Desea que vaya a dormir? 1=SI ; 2=NO ";
		cin >> respuesta;

		if (respuesta == 1)
			p.dormir();
		// El usuario define si la persona cuenta
		cout << "Desea oirme contar? 1=SI ; 2=NO ";
		cin >> respuesta;

		if (respuesta == 1)
			p.contar();

	}

	system("pause");
	return 0;
}

