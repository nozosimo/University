 //---------------------------------------------------------------------------

#pragma hdrstop

#include "TDABicola.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDABicola::crear()
{
    fin = 0;
    ini = 1;

}

void TDABicola::poner(int e)
{
    if(fin<MAX)
    {
        fin++;
        v[fin]=e;
    }
}

void TDABicola::sacar_final(int &e)
{
    e = v[fin];
    fin--;
}

void TDABicola::poner_frente(int e)
{
   fin++;
   for(int i=fin;i>ini;--i)
   {
       v[i]=v[i-1];
   }
   v[ini]=e;
}

int TDABicola::ultimo()
{
    return v[fin];
}

void TDABicola::sacar(int &E)
{
    if(!vacia())
    {
        E = v[ini];
        ini++;
    }
}

bool TDABicola::vacia()
{
    return (fin<ini);
}

int TDABicola::primero()
{
    return v[ini];
}
