#include<iostream>
#include<stdlib.h>
#include <math.h>
#include <string>

using namespace std;

void welcomePage() {
	
	cout << "BIENVENIDO" << endl;
	cout << "Seleccione una opcion a realizar:" << endl;
	cout << "1) Agregar cumpleanos." << endl;
	cout << "2) Graficar y mostrar estadistica." << endl;
	cout << "3) Salir\n";

};

void agregarCumpleanos() {
	
	string nombre;
	string apellido;
	int dia;
	int mes;
	int ano;
	
	cout << "esta opcion agrega un cumpleaños al csv";
	
	cout << "Nombre: ";
	cin >> nombre;
	
	cout <<"Apellido: ";
	cin >> apellido;
	
	cout << "FECHA DE NACIMIENTO" << endl;
	cout << "Dia: ";
	cin >> dia;
	cout << "Mes: ";
	cin >> mes;
	cout << "ano";
	cin >> ano;
};

void graficar() {
	cout << "Esta opcion grafica";
};


int main() {
	
	int opcion;
	
	welcomePage();
	cin >> opcion;
	
	if (opcion == 1) {
		agregarCumpleanos();
	}
	
	if (opcion =2) {
		graficar();
	}
	
	else {
		cout << "chao";
	}


};
