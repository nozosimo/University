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
                   Puntero Doble Enlace
                   Comprimido
            Colas:
                   Puntero

*/////////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>

#include "TDAMatrizDispersaPunteroDoble.h"


using namespace std;

void MostrarOpciones()
{
 	cout<<"POLINOMIO:\n";
	cout<<"[1] Crear\n";
    cout<<"[2] Dimensionar\n";
	cout<<"[3] Poner\n";
	cout<<"[4] Elemento\n";
	cout<<"[5] Mostrar\n";
	cout<<"[6] Repetido\n";
    cout<<"[7] Salir\n";
    cout<<"Opcion: ";
}

int main()
{
    TDAMatrizDispersaPunteroDoble MD;
    MD.crear();
    MD.dimensionar(3,4);

    MD.poner(1,1,13);
    MD.poner(2,4,5);
    MD.poner(1,1,4);
    MD.poner(1,3,7);
    MD.poner(1,2,8);
    MD.poner(3,3,15);

    for(int i=1;i<=MD.dimension_fila();++i)
    {
        for(int j=1;j<=MD.dimension_columna();++j)
        {
            cout<<MD.elemento(i,j)<<" ";
        }
        cout<<endl;
    }

	getch();
	return 0;
}
