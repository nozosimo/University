//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAPilaVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAPilaVector::Crear()
{
	tope = 0;
}

bool TDAPilaVector::vacia()
{
    return (tope==0);
}

void TDAPilaVector::meter(int elemento)
{
	if(tope<max)
	{
		tope++;
        elementos[tope]=elemento;
    }
}

void TDAPilaVector::sacar(int &elemento)
{
	if(!vacia())
	{
		elemento = elementos[tope];
        tope--;
	}else
	{
        throw("Si seras mamon...");
    }

}
