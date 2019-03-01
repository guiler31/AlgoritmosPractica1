#include "laberinto.h"
//Movimientos permitidos: arriba, derecha, abajo, izquierda;




Laberinto::Laberinto(int filas, int columnas)
{
	int** a = new int*[this->filas];
	for (int i = 0; i < this->columnas; ++i)
		a[i] = new int[this->columnas];
}

Laberinto Laberinto::moverCasilla(int ** movimiento)
{
	return Laberinto();
}

int ** Laberinto::setInicio(int ** casillaInicial)
{
	return nullptr;
}

int ** Laberinto::setFin(int ** casillaFinal)
{
	return nullptr;
}

int ** Laberinto::setBloqueos(int ** casillasBloqueadas)
{
	return nullptr;
}



Laberinto::~Laberinto()
{
	
}
