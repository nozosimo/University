/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen: Implementacion de la Clase 'Lista' usando un arreglo
*/////////////////////////////////////////////////////////////////////////////
#ifndef TDAConjuntoEnteroH
#define TDAConjuntoEnteroH
#endif

#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>


class TDAConjuntoEntero
{
	private:
		int elem;
	public:
		void crear();
		void insertar(int e);
		void suprime(int e);
        void imprimir();

		bool vacio();
		bool pertenece(int e);

		int cardinal();

};