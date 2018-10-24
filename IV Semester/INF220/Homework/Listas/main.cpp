/*////////////////////////////////////////////////////////////////////////////
    U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones

    Materia: Estructura de Datos I
	Docente: Mario Lopez Winnipeg

	Autor: Leonardo H. Anez Vladimirovna
	Correo: toborochi@outlook.com

	Resumen:
            Implementaciones de todas los temas de la Materia:
            --------------------------------------------------
            Listas:
                   Puntero
                   Vector
                   Simulacion Memoria
            Pila:
                   Vector
                   Puntero
                   Simulacion Memoria
                   Lista
            Conjunto:
                   Vector
                   Puntero
                   Simulacion Memoria
                   Lista
                   Entero
            Polinomio:
                   Vector
                   Puntero
                   Simulacion Memoria
                   Lista
*/////////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>

#include <TDAPolinomioLista.h>

using namespace std;

void MostrarOpciones()
{
 	cout<<"POLINOMIO:\n";
	cout<<"[1] Crear\n";
	cout<<"[2] Poner Termino\n";
	cout<<"[3] Mostrar Polinomio\n";
	cout<<"[4] Derivar\n";
	cout<<"[5] Mostrar Coordenadas\n";
	cout<<"[6] Area\n";
	cout<<"[7] Salir\n";
    cout<<"Opcion: ";
}

int main()
{
    TDAPolinomioLista P;
    double a,b,dx,area;
    int opcion,i;
    do
	{
		// Refresh de la Consola
		system("cls");

        // Menu de Opciones
		MostrarOpciones();

		// Opcion del Menu
		cin>>opcion;

		switch(opcion)
		{
            // Crear
			case 1:
                    P.crear();
					break;
			// Poner Terminos
			case 2:
					int coe,exp;
                    cout<<"Coeficiente:";
                    cin>>coe;
                    cout<<"Exponente:";
                    cin>>exp;
                    P.poner_termino(coe,exp);
					break;
			// Mostrar
			case 3:
					P.mostrar();
					break;
            // Derivar
			case 4:
                    P.derivar();
					break;
			// Coordenadas
			case 5:
                    cout<<"Inicio:";
                    cin>>a;
                    cout<<"Fin:";
                    cin>>b;
                    cout<<"dx:";
                    cin>>dx;

                    i=1;
                    cout<<fixed<<setprecision(3);
                    while(a<=b)
                    {
                        cout<<"x"<<i<<": "<<a<<" - fx"<<i<<": "<<P.evaluar(a)<<endl;
                        a+=dx;
                        ++i;
                    }

					break;
			 // Area
			case 6:
                    cout<<"Inicio:";
                    cin>>a;
                    cout<<"Fin:";
                    cin>>b;
                    cout<<"dx:";
                    cin>>dx;

                    area = 0;
                    while(a<b)
                    {
                        area+= abs(dx*P.evaluar(a));
                        a+=dx;
                    }
                    cout<<"Area: "<<area<<endl;
					break;
			// Salir
			default:
					break;
		}
		getch();

	}while(opcion!=7);
    

	getch();
	return 0;
}

