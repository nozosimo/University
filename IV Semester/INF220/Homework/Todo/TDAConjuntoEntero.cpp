//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAConjuntoEntero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAConjuntoEntero::crear()
{
    elem = 0;
}

bool TDAConjuntoEntero::vacio()
{
    return(elem==0);
}

int TDAConjuntoEntero::cardinal()
{
	if(!vacio())
	{
		return int(log10(double(elem))
		+1);
    }

}

bool TDAConjuntoEntero::pertenece(int e)
{
    int aux = elem;
	while(aux>0)
	{
		if(aux%10==e)
		{
			return true;
		}
		aux/=10;
	}
    return false;
}

void TDAConjuntoEntero::insertar(int e)
{
	if(!pertenece(e))
	{
        elem = elem*10 + e;
	}else
	{
        throw("Elemento Existente...");
	}
}


int inverso(int x)
{
	int ans = 0;
	while(x>0)
	{
       ans = ans*10 + x%10;
	   x/=10;
	}
    return ans;

}

void TDAConjuntoEntero::suprime(int e)
{
	int aux = elem;
    int inv = 0;
	while(aux%10!=e && aux>0)
	{
       inv = inv * 10 + aux%10;
       aux/=10;
	}
	aux/=10;

	int pot = 1;
	for(int i=0;i<log10(double(inv));++i)
	{
        pot*=10;
    }

	elem = aux*pot + inverso(inv);
}

void TDAConjuntoEntero::imprimir()
{
	std::cout<<"[";

	int dig = int(log10(double(elem))) + 2;

	for(int i=1;i<=dig;++i)
	{
		if(pertenece(i))
		{
            std::cout<< i << ((i<dig)?", ":"");
        }
	}
	std::cout<<"]"<<std::endl;
}