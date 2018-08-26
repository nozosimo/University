//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAListaVector.h"
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)


TDAListaVector::TDAListaVector()
{
    Longitud = 0;
}

int TDAListaVector::fin()
{
	if(vacia())
	{

	}else
	{
        return Longitud;
    }
}


int TDAListaVector::primero()
{
	if(!vacia())
	{
		return 1;
	}else
	{

    }
}

int TDAListaVector::siguiente(int direccion)
{
	if(vacia())
	{

	}else
	if(direccion==Longitud)
	{

	}else
	{
        return direccion+1;
    }
}

int TDAListaVector::anterior(int direccion)
{
	if(vacia())
	{

	}else
	if(direccion==1)
	{

	}else
	{
        return direccion-1;
    }
}

bool TDAListaVector::vacia()
{
    return (Longitud==0);
}

int TDAListaVector::recupera(int direccion)
{
	if(vacia())
	{

	}else
	{
		if(!(direccion>=1 && direccion<=Longitud))
		{
            // Llamar Excepcion
		}else
		{
            return Elementos[direccion];
        }
    }
}

int TDAListaVector::longitud()
{
    return Longitud;
}

void TDAListaVector::inserta(int direccion,int elemento)
{
	if(Longitud==Max)
	{

	}else
	if(!(direccion>=1 && direccion<=Longitud+1))
	{
		// Excepcion Direccion
	}else
	{
       	for(int i=Longitud+1;i>=direccion+1;--i)
		{
			Elementos[i]=Elementos[i-1];
		}
		Elementos[direccion]=elemento;
		Longitud++;
    }



}

void TDAListaVector::suprime(int direccion)
{
	if(Longitud==0)
	{
        // Excepcion Lista Vacia
	}else
	if(!(direccion>=1 && direccion<=Longitud))
	{
       // Excepcion Limite
	}else
	{
		for(int i=direccion;i<=Longitud-1;++i)
		{
			Elementos[i]=Elementos[i+1];
		}
        Longitud--;
    }
}

void TDAListaVector::modifica(int direccion,int elemento)
{
	if(Longitud==0)
	{
        // Excepcion Vacia
	}else
	if(!(direccion>=1 && direccion<=Longitud))
	{
	   // Excepcion Limite
	}else
	{
        Elementos[direccion]=elemento;
    }

}

void TDAListaVector::mostrar()
{
	std::cout<<"<";
	for(int i=primero();i<=fin();++i)
	{
		std::cout<< recupera(i) << ((i<fin())?", ":"") ;
	}
    std::cout<<">";
	std::cout<<std::endl;
}
