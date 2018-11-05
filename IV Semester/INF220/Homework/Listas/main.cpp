/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen:
            Implementaciones de todas los temas de la Materia:
            --------------------------------------------------
            Listas:
                   Puntero
                   Vector
                   Simulacion Memoria
            Pila:
                   Vector
                   Puntero
                   Simulacion Memoria
                   Lista
            Conjunto:
                   Vector
                   Puntero
                   Simulacion Memoria
                   Lista
                   Entero
            Polinomio:
                   Vector
                   Puntero
                   Simulacion Memoria
                   Lista
            Matriz Dispersa:
                   Vector
                   Puntero
                   Comprimido
*/////////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>

#include <TDAMatrizDispersaVector.h>

using namespace std;

void MostrarOpciones()
{
 	cout<<"POLINOMIO:\n";
	cout<<"[1] Crear\n";
	cout<<"[2] Poner Termino Polinomio (P1)\n";
	cout<<"[3] Poner Termino Polinomio (P2)\n";
	cout<<"[4] Mostrar Polinomio (P1)\n";
	cout<<"[5] Mostrar Polinomio (P2)\n";
	cout<<"[6] Sumar Polinomio (P1,P2)\n";
	cout<<"[7] Mostrar P3\n";
    cout<<"[8] Salir\n";
    cout<<"Opcion: ";
}

int main()
{
     TDAMatrizDispersaVector MD;
    

	getch();
	return 0;
}

