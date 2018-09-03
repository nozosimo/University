//---------------------------------------------------------------------------

#ifndef TDAPilaListaH
#define TDAPilaListaH
//---------------------------------------------------------------------------
#endif

#include "TDAListaPuntero.h"



class TDAPilaLista
{
	private:
        TDAListaPuntero L;

	public:
        void crear();
		void meter(int elemento);
		void sacar(int &elemento);
		void imprimir(TDAPilaLista &Pila);

		bool vacia();

		int cima();

};


