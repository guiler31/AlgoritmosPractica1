// Jorge Lopez & Guillermo Rodriguez

#include <iostream>
#include <cstdlib>
#include <new>          // ::operator new[]


using namespace std;
int filas, columnas, indices, lengthCount, aux;
int* celdasBloqueadas;
int celdaBloqueada;



int main() {

	cout << "Numero de filas?" << endl;
	cin >> filas;

	while (!cin || filas < 0) {
		cout << "Por favor introduzca un numero natural" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> filas;
	}
	

	cout << "Numero de columnas?" << endl;
	cin >> columnas;

	while (!cin || columnas < 0) {
		cout << "Por favor introduzca un numero natural" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> columnas;
	}
	celdasBloqueadas = new (nothrow) int[filas*columnas];
	do {
        cout << "¿Indices de la celda bloqueada (para salir, introducir  00)?" << endl;
        cin >> indices;
        aux = indices;
        lengthCount = 0;
        for (; aux != 0; aux /= 10, lengthCount++);
        if (indices == 00) {
            lengthCount = 2;
        }
        while (!cin || indices < 0 || lengthCount!=2) {
            cout << "Por favor introduzca dos numeros naturales" << endl;
            cin.clear();
            cin.ignore(256, '\n');
            cin >> indices;
            aux = indices;
            lengthCount = 0;
            for (; aux != 0; aux /= 10, lengthCount++);
        }
		celdasBloqueadas[indices];
    } while (indices !=00);

	delete[] celdasBloqueadas;


	cout << "Celda inicial?" << endl;
	cout << "Celda final?" << endl;


}



