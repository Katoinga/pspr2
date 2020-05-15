#pragma once
class Tanque
{
private:
	double contenido;
public:
	static const int capacidad = 5000.0;
	Tanque(void);
	double getContenido(void) const;
	void agregar(double cantidad);
	void sacar(double cantidad);
	void sacaMitad(void);
	~Tanque(void);
};