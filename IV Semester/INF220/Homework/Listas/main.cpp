/*////////////////////////////////////////////////////////////////////////////
	Tarea #3
	Docente: Mario Lopez Winnipeg
	U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones
	Leonardo Anez Vladimirovna
*/////////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

#include "TDAConjuntoMemoria.h"

/*
 Listas-----------------
	Lista Puntero:    OK
	Lista Vector:     OK
	Lista Memoria:    OK
 Pilas------------------
	Pila Vector:      OK
	Pila Puntero:     OK
	Pila Memoria:     OK
	Pila Lista:       OK
 Conjuntos--------------
	Conjunto Vector:  OK
	Conjunto Puntero: OK
	Conjunto Memoria: OK
	Conjunto Lista:   OK
	Conjunto Entero:  OK
*/

using namespace std;

void MostrarOpciones()
{
	cout<<"[1] Crear\n";
	cout<<"[2] Meter\n";
	cout<<"[3] Sacar\n";
	cout<<"[4] Imprimir\n";
	cout<<"[5] Salir\n";
	cout<<"Opcion: ";
}

int main()
{
	


	/*
	int opcion,dato;

	TDAPilaLista PL;

	do
	{
		// Refresh de la Consola
		system("cls");

		// Menu de Opciones
		MostrarOpciones();

		// Opcion del Menu
		cin>>opcion;

		switch(opcion)
		{
			case 1:
				PL.crear();
			break;
			case 2:
				cout<< "Ingrese el Elemento a Insertar: ";
				cin>>dato;
                PL.meter(dato);
			break;
			case 3:
				int x;
				PL.sacar(x);
				cout<<"Elemento: "<<x<<endl;

			break;
            case 4:
                PL.imprimir(PL);
			break;
			default:
			break;
		}
        getch();

	}while(opcion!=5);
    */
	getch();
	return 0;
}

