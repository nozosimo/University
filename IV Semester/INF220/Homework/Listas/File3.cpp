/*////////////////////////////////////////////////////////////////////////////
	Tarea #2
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

#include "SMemoria.h"
#include "TDAListaVector.h"
#include "TDAListaMemoria.h"
#include "TDAListaPuntero.h"


using namespace std;

int main()
{
	SMemoria 		 M;  // OK
	TDAListaVector  LV;  // OK
	TDAListaPuntero LP;

	NodoP *p = new NodoP;
	p = LP.primero();

	LP.insertar(p,45);
	LP.insertar(LP.primero(),13);

	cout<< LP.longitud() <<endl;
	cout<< LP.recupera( LP.primero()->Sig ) <<endl;

	LP.modifica(LP.primero(),33);

    cout<< LP.recupera(LP.primero()) <<endl;

    LP.mostrar();

	getch();

	return 0;
}

