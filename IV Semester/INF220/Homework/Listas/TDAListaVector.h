/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen: Implementacion de la Clase 'Lista' usando un arreglo
*/////////////////////////////////////////////////////////////////////////////

#ifndef TDAListaVectorH
#define TDAListaVectorH
#endif


// Cantidad de Maxima de Elementos de la Lista
static const int Max = 100;

class TDAListaVector
{
	private:
		int Elementos[Max]; // Arreglo de elementos
		int Longitud;       // Longitud Dinamica de la Lista

	public:
        // Constructor
		void crear();

		// Posicion del ultimo elemento (Longitud)
		int fin();

		// Posicion del primer elemento (1)
		int primero();

	    // Funcion que devuelve la siguiente posicion a un posicion dada
		int siguiente(int direccion);

		// Funcion que devuelve la anterior posicion a un posicion dada
		int anterior(int direccion);

		// Funcion que indice si la Lista esta vacia
		bool vacia();

		// Funcion que devuelve un elemento en cierta posicion
		int recupera(int direccion);

		// Funcion que devuelve el atributo 'Longitud' de la Lista
		int longitud();

		// Metodo que inserta un elemento (elemento) en una posicion (direccion)
		void inserta(int direccion,int elemento);

		// Metodo que elimina un elemento en cierta posicion
		void suprime(int direccion);

		// FMetodo que modifica un elemento
		void modifica(int direccion,int elemento);

		// Metodo para mostrar la Lista
		void mostrar();
};
