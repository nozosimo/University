//---------------------------------------------------------------------------

#ifndef TDAPilaVectorH
#define TDAPilaVectorH
//---------------------------------------------------------------------------
#endif



class TDAPilaVector
{

	private:
        static const int max = 100;
         int elementos[TDAPilaVector::max];
		 int tope;
	public:
		void crear();
		bool vacia();
		void meter(int elemento);
		void sacar(int &elemento);
        void imprimir();
};
