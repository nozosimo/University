//---------------------------------------------------------------------------

#ifndef TDAMatrizDispersaVectorH
#define TDAMatrizDispersaVectorH
//---------------------------------------------------------------------------
#endif

static const int max = 100;

class TDAMatrizDispersaVector
{
    private:
           int vf[100],vc[100],df,dc,repe,nt;
           int vd[100];
    public:
           void crear();
           void dimensionar(int df,int dc);
           int dimension_fila();
           int dimension_columna();
           void poner(int f,int c,int elemento);
           int elemento(int f,int c);
           void definir_valor_repetido(int valor);

};