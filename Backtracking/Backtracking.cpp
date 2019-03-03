// Jorge Lopez & Guillermo Rodriguez

#include <iostream>
#include <cstdlib>
#include <new>          // ::operator new[]


using namespace std;
int filas, columnas, indices, lengthCount, aux, contador;
int* celdasBloqueadas;
bool condicion;


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
	celdasBloqueadas = new int[filas*columnas];
	contador = 0;
	do {
        cout << "¿Indices de la celda bloqueada (para salir, introducir  00)?" << endl;
        cin >> indices;
        aux = indices;
        lengthCount = 0;
        for (; aux != 0; aux /= 10, lengthCount++);
        if (indices == 00) {
			condicion = false;
            lengthCount = 2;
		}
		else {
			condicion = true;
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
		cout << indices;

		if (condicion == true && lengthCount == 2)
		{

			indices >> celdasBloqueadas[contador];
			contador++;
		}
    } while (indices !=00);
	cout << "You have entered: " << endl;


	for (int n = 0; n < contador; n++) {
		cout << celdasBloqueadas[n] << ", ";
	}
	delete[] celdasBloqueadas;


	cout << "Celda inicial?" << endl;
	cout << "Celda final?" << endl;


}



