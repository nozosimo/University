//---------------------------------------------------------------------------

#ifndef TDABicolaH
#define TDABicolaH
//---------------------------------------------------------------------------
#endif
     const int MAX =100;
class TDABicola
{
     private:
            int v[MAX];
            int ini,fin;
    public:
           void crear();
           bool vacia();

           void poner(int e);
           void poner_frente(int e);

           void sacar(int &e);
           void sacar_final(int &e);

           int primero();
           int ultimo();
};
