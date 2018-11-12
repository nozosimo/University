//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAColaPuntero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAColaPuntero::crear()
{
    ini = NULL;
    fin = NULL;
}

bool TDAColaPuntero::vacia()
{
    return ini==NULL;
}

int TDAColaPuntero::primero()
{
    if(!vacia())
    {
        return ini->elemento;
    }
}

void TDAColaPuntero::poner(int e)
{
    Nodo *aux = new Nodo;
    if(aux!=NULL)
    {
        aux->elemento = e;
        aux->Sig=NULL;
        if(vacia())
        {
            ini=aux;
            fin=aux;
        }else
        {
            fin->Sig=aux;
            fin=aux;
        }
    }
}
