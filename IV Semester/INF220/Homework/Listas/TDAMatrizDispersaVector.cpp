//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDAMatrizDispersaVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void TDAMatrizDispersaVector::crear()
{
    df = 0;
    dc = 0;
    repe = 0;
    nt=0;
}

void TDAMatrizDispersaVector::definir_valor_repetido(int e)
{
    if(nt==0)
    {
        repe = e;
    }else
    {
        bool x = false;
        for(int i=1;i<=nt;++i)
        {
            if(vd[i]==e)
             x=true;
             break;
        }
        if(x==false)
        {
            repe = e;
        }
    }
}

void TDAMatrizDispersaVector::poner(int f,int c,int e)
{
    int lug=0;
    for(int i=1;i<=nt;++i)
    {
         if(vf[i]==f && vc[i]==c)
         {
             lug = i;
             break;
         }
    }
    if(lug>0)
    {
        vd[lug]=e;
    }else
    if(nt<max)
    {
        nt++;
        vd[nt]=e;
        vf[nt]=f;
        vc[nt]=c;
    }else
    {
        //Error
    }
}

void   TDAMatrizDispersaVector::dimensionar(int f,int c)
{
    df = f;
    dc = c;
}


int TDAMatrizDispersaVector::elemento(int f,int  c)
{
    if((f>=1 && f<= df) && ( c>=1 && c<=dc))
    {
       int lug=0;
    for(int i=1;i<=nt;++i)
    {
         if(vf[i]==f && vc[i]==c)
         {
             lug = i;
             break;
         }
    }
     if(lug>0)
     {
        return vd[lug];
     }else
     {
         return repe;
     }
    }
}

int TDAMatrizDispersaVector::dimension_fila()
{
    return df;
}

int TDAMatrizDispersaVector::dimension_columna()
{
    return dc;
}
