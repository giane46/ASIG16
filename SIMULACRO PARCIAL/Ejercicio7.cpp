// ConsoleApplication94.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

//Ejercicio7 Simulacro Parcial

int main()
{
	//Entrada
	char tipoNoticia;
	int hora;
	char origen;

	int sumDep = 0;
	int sumAct = 0;
	int sumEntr = 0;

	int sumMad = 0;
	int sumMan = 0;
	int sumTar = 0;
	int sumNoc = 0;

	int sumNac = 0;
	int sumExt = 0;

	//Logica
	while (1) {
		cout << "Ingrese el tipo de noticia (D: Deportes; A: Actualidad: E: Entretenimiento): ";
		cin >> tipoNoticia;

		if (tipoNoticia == 'X') {
			break;
		}

		switch (tipoNoticia) {
		case 'D': sumDep++;
			break;
		case 'A': sumAct++;
			break;
		case 'E': sumEntr++;
			break;
		default: cout << "ERROR. Ingrese un tipo de noticia valido." << endl;
			break;
		}

		cout << "Ingrese la hora de publicacion: ";
		cin >> hora;
		if (hora >= 0 && hora <= 5) {
			sumMad++;
		}
		else {
			if (hora >= 6 && hora <= 12) {
				sumMan++;
			}
			else {
				if (hora >= 13 && hora <= 17) {
					sumTar++;
				}
				else {
					if (hora >= 18 && hora <= 23) {
						sumNoc++;
					}
					else {
						cout << "ERROR. Ingrese una hora valida." << endl;
					}
				}
			}
		}

		cout << "Ingrese el origen de la noticia(N: Nacional; E: Extranjera): ";
		cin >> origen;
		switch (origen) {
		case 'N': sumNac++;
			break;
		case 'E': sumExt++;
			break;
		default: cout << "ERROR. Ingrese un origen valido." << endl;
		}
	}

	//Salida
	cout << endl;
	cout << endl;

	cout << "Noticias de Deporte: " << sumDep << endl;
	cout << "Noticias de Actualidad: " << sumAct << endl;
	cout << "Noticias de Entretenimiento: " << sumEntr << endl;

	cout << endl;

	if (sumMad > sumMan && sumMad > sumTar && sumMad > sumNoc) {
		cout << "En la MADRUGADA se publicaron mas noticias." << endl;
	}
	else {
		if (sumMan > sumMad && sumMan > sumTar && sumMan > sumNoc) {
			cout << "En la MANIANA se publicaron mas noticias." << endl;
		}
		else {
			if (sumTar > sumMad && sumTar > sumMan && sumTar > sumNoc) {
				cout << "En la TARDE se publicaron mas noticias." << endl;
			}
			else {
				if (sumNoc > sumMad && sumNoc > sumMan && sumNoc > sumTar) {
					cout << "En la NOCHE se publicaron mas noticias." << endl;
				}
			}
		}
	}

	cout << endl;

	if (sumNac > sumExt) {
		cout << "Predominan las noticias NACIONALES." << endl;
	}
	else {
		cout << "Predominan las noticias EXTRANJERAS." << endl;
	}

	system("pause");
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
