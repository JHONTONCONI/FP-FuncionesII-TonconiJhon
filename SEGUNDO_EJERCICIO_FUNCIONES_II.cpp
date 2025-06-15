//Generador de Números Aleatorios: Crea un programa que genere y muestre una serie de números
//aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario
//la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función
//rand de la librería cstdlib para generar los números aleatorios.
#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	int cantidaddigitos, numero, maximo;
	cout<<"\n\n     ***********************************************************"<<endl;
	cout<<"     INGRESE LA CANTIDAD DE NUMEROS ALEATORIOS QUE DESEA OBTENER"<<endl;
	cout<<"     ***********************************************************"<<endl;
	cout<<"                            ";cin>>cantidaddigitos;
	cout<<"\n\n     ************************"<<endl;
	cout<<"     INGRESE EL NUMERO LIMITE"<<endl;
	cout<<"     ************************"<<endl;
	cout<<"          ";cin>>maximo;
	for (int i=1; i<=cantidaddigitos; i++){
		numero= rand()%(maximo+1);
		cout<<numero<<endl;
	}
	return 0;
}
