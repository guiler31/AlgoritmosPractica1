// Jorge Lopez & Guillermo Rodriguez

#include <iostream>
#include <cstdlib>

using namespace std;
int filas, columnas;

int main() {

	cout << "Numero de filas?" << endl;
	cin >> filas;

	while (!cin || filas < 0) {
		cout << "Por favor introduzca un numero" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> filas;
	}
	

	cout << "Numero de columnas?" << endl;
	cin >> columnas;

	while (!cin || columnas < 0) {
		cout << "Por favor introduzca un numero" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> columnas;
	}
	

	cout << "¿Indices de la celda bloqueada (para salir, introducir 0 0)?" << endl;
	cout << "¿Celda inicial?" << endl;
	cout << "¿Celda final?" << endl;


}



