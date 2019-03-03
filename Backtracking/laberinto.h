class Laberinto
{

public:
	Laberinto(int filas, int columnas);
	Laberinto moverCasilla(int** movimiento);
	int** setInicio(int** casillaInicial);
	int** setFin(int** casillaFinal);
	int** setBloqueos(int* casillasBloqueadas);
	virtual ~Laberinto();

private:
	int filas;
	int columnas;


};

