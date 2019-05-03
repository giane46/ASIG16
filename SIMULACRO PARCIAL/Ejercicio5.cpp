// ConsoleApplication100.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

//EJERCICIO4 HOJA4 SEM7

int main()
{
	double tour;
	char empresaTransporte;
	char tipoTransporte;
	char hotel;
	int dias;
	const double tipoCambio = 2.6;
	
	int sumOltursaBus = 0;
	int sumOltursaVIP = 0;
	int sumCruzBus = 0;
	int sumCruzVIP = 0;
	int sumLineaBus = 0;

	int sumPinos = 0; //Hotel de $20
	int sumEmperador = 0; //Hotel de $30
	int sumCaniaveral = 0; //Hotel de $30

	double pasajerosOltursa;
	double ingresosPinos, ingresosEmperador, ingresosCaniaveral;

	
	while (1) {
		cout << "Ingrese tipo de transporte (B: bus cama; V: servicio vip): ";
		cin >> tipoTransporte;
		switch (tipoTransporte) {
		case 'B': break;
		case 'V': break;
		}
		if (tipoTransporte == 'F') {
			break;
		}

		cout << "Ingrese la empresa en la que viaja (O: Oltursa; C: Cruz del Sur; L: Linea): ";
		cin >> empresaTransporte;
		if (empresaTransporte == 'O' || empresaTransporte == 'C' || empresaTransporte == 'L') {
			if (tipoTransporte == 'B' && empresaTransporte == 'O') {
				sumOltursaBus++;
			}
			else {
				if (tipoTransporte == 'B' && empresaTransporte == 'C') {
					sumCruzBus++;
				}
				else {
					if (tipoTransporte == 'B' && empresaTransporte == 'L') {
						sumLineaBus++;
					}
					else {
						if (tipoTransporte == 'V' && empresaTransporte == 'O') {
							sumOltursaVIP++;
						}
						else {
							if (tipoTransporte == 'V' && empresaTransporte == 'C') {
								sumCruzVIP++;
							}
						}
					}
				}
			}
		}
		else {
			cout << "ERROR. Ingrese un tipo de transporte valido.";
			continue;
		}

		cout << "Ingrese el Hotel en el que se hospeda (P: Los Pinos; E: Emperador; C: Cañaveral): ";
		cin >> hotel;
		switch (hotel) {
		case 'P': sumPinos++;
			break;
		case 'E': sumEmperador++;
			break;
		case 'C': sumCaniaveral++;
			break;
		default: cout << "ERROR. Ingrese un hotel valido.";
			break;
		}

		cout << "Ingrese el numero de dias de viaje: ";
		cin >> dias;
		if (dias < 3) {
			cout << "Ingrese un numero de dias valido." << endl;
		}
	}
	
	cout << endl << endl << endl << endl;
	pasajerosOltursa = ((sumOltursaBus + sumOltursaVIP) / (sumPinos + sumEmperador + sumCaniaveral)) * 100;
	ingresosPinos = sumPinos * 20 * tipoCambio;
	ingresosEmperador = sumEmperador * 30 * tipoCambio;
	ingresosCaniaveral = sumCaniaveral * 30 * tipoCambio;

	cout << "Cantidad de viajeros que se alojan en un hotel de US$ 30: " << sumEmperador + sumCaniaveral << endl;
	cout << "% de viajeros que eligieron Oltursa: " << pasajerosOltursa << endl << endl << endl;

	cout << "Reporte de ingresos de cada empresa: " << endl;
	cout << "Oltursa: " << endl;
	cout << "Bus cama: " << sumOltursaBus * 150 << endl;
	cout << "Servicio VIP: " << sumOltursaVIP * 230 << endl << endl;
	cout << "Cruz del Sur. " << endl;
	cout << "Bus cama: " << sumCruzBus * 200 << endl;
	cout << "Servicio VIP: " << sumCruzVIP * 300 << endl << endl;
	cout << "Linea" << endl;
	cout << "Bus cama: " << sumLineaBus * 100 << endl << endl << endl;

	if (ingresosPinos > ingresosEmperador && ingresosPinos > ingresosCaniaveral) {
		cout << "El hotel que registró más ingresos fue Los Pinos y el monto fue " << ingresosPinos << " soles." << endl;
	}
	else {
		if (ingresosEmperador > ingresosPinos && ingresosEmperador > ingresosCaniaveral) {
			cout << "El hotel que registró más ingresos fue Emperador y el monto fue " << ingresosEmperador << " soles." << endl;
		}
		else {
			if (ingresosCaniaveral > ingresosPinos && ingresosCaniaveral > ingresosPinos) {
				cout << "El hotel que registró más ingresos fue Cañaveral y el monto fue " << ingresosCaniaveral << " soles." << endl;
			}
		}
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
