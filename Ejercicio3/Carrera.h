#pragma once
class Carrera
{
private:
	int distancia;
	char* ganador;
public:
	Carrera(int d, const char* g);
	int getDistancia(void)const;
	char* getGanador(void) const;
	~Carrera(void);
};

