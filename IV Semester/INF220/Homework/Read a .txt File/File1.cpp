/*////////////////////////////////////////////////////////////////////////////
	Tarea #1
	Docente: Mario Lopez Winnipeg

	U.A.G.R.M.
	Facultad  de Ingenieria en Ciencias de la Computacion y Telecomunicaciones
	Leonardo Anez Vladimirovna
*/////////////////////////////////////////////////////////////////////////////

#include <iostream.h>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

// Constante que define el nombre del archivo y su extension
const char filename_in[] = "entrada.txt";

// Funcion que Indica si un caracter es Numero
bool esNumero(char &c)
{
    return (c>='0' && c<='9');
}

// Funcion que devuelve la cantidad de Numeros en una cadena
int conteoNumero(string &s)
{
	int total = 0;

	for(int i=0;i<s.size();++i)
	{

		  if(esNumero(s[i]))
		  {
			 int j = i;
             while(esNumero(s[j]) && j<s.size() )
			 {
				 j++;
			 }
			i = j;
		  	total++;
		  }

	}

    return total;
}

int _tmain(int argc, _TCHAR* argv[])
{

	int totalNumeros = 0;

	string temp;
	ifstream file;
	file.open ("entrada.txt");

	// Entrada del Archivo
	while (!file.eof())
	{
		getline (file, temp);
        totalNumeros += conteoNumero(temp);
	}


    cout<<"Total Numeros Detectados: "<<totalNumeros<<endl;

	// Esperar tecla para Finalizar
	getch();

	return 0;
}