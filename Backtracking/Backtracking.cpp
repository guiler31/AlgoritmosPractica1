// Jorge Lopez & Guillermo Rodriguez

#include <iostream>
#include <cstdlib>

using namespace std;
int filas, columnas;

int main() {

	cout << "Numero de filas?" << endl;
	cin >> filas;

	while (!cin) {
		cout << "Por favor introduzca un numero" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> filas;
	}
	while (filas < 0) {
		cout << "Por favor introduzca un numero positivo" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> filas;
	}

	cout << "Numero de columnas?" << endl;
	cin >> columnas;

	while (!cin) {
		cout << "Por favor introduzca un numero" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> columnas;
	}
	while (filas < 0) {
		cout << "Por favor introduzca un numero positivo" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> columnas;
	}

	cout << "¿Indices de la celda bloqueada (para salir, introducir 0 0)?" << endl;
	cout << "¿Celda inicial?" << endl;
	cout << "¿Celda final?" << endl;


}



