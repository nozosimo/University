//---------------------------------------------------------------------------

#ifndef TDAPilaPunteroH
#define TDAPilaPunteroH
//---------------------------------------------------------------------------
#endif

 struct Nodo
  {
	int elemento;
    Nodo *sig;
  };

class TDAPilaPuntero
{
	  private:
		Nodo *Tope;
	  public:
        void crear();
        bool vacia();
		int cima();
		void meter(int elemento);
		int sacar();
        void imprimir(TDAPilaPuntero &Pila);

};