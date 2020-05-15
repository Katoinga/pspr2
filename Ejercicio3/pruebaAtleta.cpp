
#include "Atleta.h"
#include "Carrera.h"
#include "Carrera1.h"
#include "Carrera2.h"
#include <iostream>

using std::cout;
int main(void)
{
	//a) es desde aca
	cout << "a.";
	Atleta a1("Jose Bustios" , 1, "Argentina", 12.6);
	Atleta a2("Rodrigo Santillana", 2, "Espana", 8.7);
	//Se comprueba el que se demore menos
	if (a1.getTiempo() < a2.getTiempo())
		cout << "El atleta " << a1.getNombre() << " es el mas rapido\n";
	else
		cout << "El atleta " << a2.getNombre() << " es el mas rapido\n";
	
	// hasta aca
	//b)
	cout << "b.";
	//se crea una carrera con el mas rapido anterior
	Carrera c1( 100 , "Rodrigo Santillana");
	cout << "El ganador de la carrera es: " << c1.getGanador() << "\n";
	//c)
	cout << "c.";
	Atleta* p = new Atleta( "Bryan Mendez", 3, "Mexico", 11.4);
	// se crea una carrera almacenando un atleta
	Carrera1 c2(100, p);
	Atleta* q = c2.getGanador();
	cout << "El ganador es: \n";
	q->mostrarDatos();
	//d)
	cout << "d.";
	//se crea una carrera almacenando los atletas
	// quien gana se rige por tiempo
	Carrera2 c3(100, 3);
	c3.agregarAtleta(&a1);
	c3.agregarAtleta(&a2);
	c3.agregarAtleta(p);
	Atleta* r = c3.getGanador();
	int can = c3.getCantAtletas();
	cout << "Siendo " << can << " Competidores el ganador fue\n";
	r->mostrarDatos();
	delete p;
	return 0;
}
