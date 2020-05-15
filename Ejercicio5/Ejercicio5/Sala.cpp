#include <iostream>
#include "Sala.h"
#include <math.h>
#include <String.h>

using namespace std;
//constructor de sala
Sala::Sala(const char* n, int a, int l, bool e) {
	nombre = new char[strlen(n) + 1];
	strcpy_s(nombre, strlen(n) + 1,n);
	ancho = a;
	largo = l;
	equipado = e;
}
//hallamos la capacidad 
//sacando el area(a*l) y diviendola entre 1.5
// redondeamos para abajo ya que las personas deben ser
// exactas no 2,3 personas ni 2,8 personas solo serian 2
int Sala::hallarCapacidad() {
	int area = hallarArea();
	double cap = area / 1.5;
	return floor(cap);
}
//Hallamos cuantos metros hay(area)
//verificamos si es equipada y le multiplicamos el costo de cada metro
int Sala::hallarAlquiler() {
	int metros = hallarArea();
	if (equipado == true) {
		return (45 * metros);
	}
	else {
		return (32 * metros);
	}
	return 0;
}
//muestra los datos
void Sala::mostrarDatos() {
	cout << "\n\nEsta sala es: " << nombre << "\nLargo:" << largo;
	cout << "\nAncho: "<<ancho;
	// verifica si esta equipada
	if (equipado) {
		cout << "\nSe encuentra equipada";
	}
	else {
		cout << "\nNO se encuentra equipada";

	}
	cout << "\nLa capacidad es: " << hallarCapacidad()<<" personas";
	cout << "\nEl alquiler es: " << hallarAlquiler();
}
Sala::~Sala(){}