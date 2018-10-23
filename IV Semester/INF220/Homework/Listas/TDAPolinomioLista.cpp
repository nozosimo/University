//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAPolinomioLista.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAPolinomioLista::crear()
{
    L.crear();
}

bool TDAPolinomioLista::escero()
{
    return L.vacia();
}

int TDAPolinomioLista::numero_terminos()
{
    return L.longitud()/2;
}

void TDAPolinomioLista::poner_termino(int coe,int exp)
{
    bool existe = false;

    for(int i=1;i<=numero_terminos();++i)
    {
        int expt = exponente(i);
        if(expt==exp)
        {
            existe = true;
        }
    }

    if(!existe)
    {
        L.insertar(L.primero(),exp);
        L.insertar(L.primero(),coe);
    }else
    {
        TDAListaPuntero aux; aux.crear();
        while(L.longitud()>0)
        {
            int coet = L.recupera(L.primero()); L.suprime(L.primero());
            int expt = L.recupera(L.primero()); L.suprime(L.primero());
            if(expt==exp)
            {
                coet+=coe;
            }
            if(coet!=0)
            {
                                   aux.insertar(aux.primero(),expt);
                                    aux.insertar(aux.primero(),coet);
            }

        }

        while(aux.longitud()>0)
        {
            int coet = aux.recupera(aux.primero()); aux.suprime(aux.primero());
            int expt = aux.recupera(aux.primero()); aux.suprime(aux.primero());
            L.insertar(L.primero(),expt);
            L.insertar(L.primero(),coet);
        }

    }

}

void TDAPolinomioLista::mostrar()
{
    for(int i=1;i<=numero_terminos();++i)
    {
        int exp = exponente(i);
        int coe = coeficiente(exp);
       if(coe>0 && i>1)
        {
             std::cout<<"+";
        }
        if(coe==-1)
        {
             std::cout<<"-";
        }else
        if(coe!=1)
        {
            std::cout<<coe;
        }

        if(exp>1)
        {
            std::cout<<"x^"<<exp;
        }else
        if(exp==1)
        {
            std::cout<<"x";
        }


    }     std::cout<<std::endl;
}

int TDAPolinomioLista::exponente(int nro)
{
    Lista aux;
    aux.crear();
    int i = 1,ans=0;

    while(L.longitud()>0)
    {

        int x =  L.recupera(L.primero());
        L.suprime(L.primero());
        aux.insertar(aux.primero(),x);


        x = L.recupera(L.primero());
        L.suprime(L.primero());
        aux.insertar(aux.primero(),x);

        if(nro==i)
        {
            ans = x;
        }


        i++;
    }

    while(aux.longitud()>0)
    {
        int x = aux.recupera(aux.primero());
        aux.suprime(aux.primero());
        L.insertar(L.primero(),x);
    }

    return ans;

}

void  TDAPolinomioLista::sumar(TDAPolinomioLista a, TDAPolinomioLista b)
{
   for(int i=1;i<=a.numero_terminos();++i)
   {
       int exp = a.exponente(i);
       int coe = a.coeficiente(exp);
       poner_termino(coe,exp);
   }
   for(int i=1;i<=b.numero_terminos();++i)
   {
       int exp = b.exponente(i);
       int coe = b.coeficiente(exp);
       poner_termino(coe,exp);
   }
}

void  TDAPolinomioLista::resta(TDAPolinomioLista a, TDAPolinomioLista b)
{
    for(int i=1;i<=a.numero_terminos();++i)
   {
       int exp = a.exponente(i);
       int coe = a.coeficiente(exp);
       poner_termino(coe,exp);
   }
   for(int i=1;i<=b.numero_terminos();++i)
   {
       int exp = b.exponente(i);
       int coe = b.coeficiente(exp);
       poner_termino(-coe,exp);
   }
}


void TDAPolinomioLista::derivar()
{
    Lista aux;
    aux.crear();
    while(L.longitud()>0)
    {
        int coe = L.recupera(L.primero());
        L.suprime(L.primero());

        int exp = L.recupera(L.primero());
        L.suprime(L.primero());

        aux.insertar(aux.primero(),exp-1);
        aux.insertar(aux.primero(),exp*coe);
    }

    while(aux.longitud()>0)
    {
        int coe = aux.recupera(aux.primero());
        aux.suprime(aux.primero());

        int exp = aux.recupera(aux.primero());
        aux.suprime(aux.primero());

        L.insertar(L.primero(),exp);
        L.insertar(L.primero(),coe);
    }

}

double pot(double base, int exponente)
{
   double ans = 1;

    for(int i=1;i<=exponente;++i)
    {
        ans*=base;
    }

    return ans;
}

double TDAPolinomioLista::evaluar(double x)
{
    double fx = 0;
      for(int i=1;i<=numero_terminos();++i)
    {
        int exp = exponente(i);
        int coe = coeficiente(exp);

        fx+=double(coe)*pot(x,exp);
    }
    return fx;
}

int TDAPolinomioLista::coeficiente(int exp)
{

    int ans;
     Lista aux;
    aux.crear();

    while(L.longitud()>0)
    {
        int coe =  L.recupera(L.primero());
        L.suprime(L.primero());
        aux.insertar(aux.primero(),coe);

        int expt = L.recupera(L.primero());
        L.suprime(L.primero());
        aux.insertar(aux.primero(),expt);

        if(expt==exp)
        {
           ans = coe;
        }

    }

    while(aux.longitud()>0)
    {
        int x = aux.recupera(aux.primero());
        aux.suprime(aux.primero());
        L.insertar(L.primero(),x);
    }
    return ans;
}