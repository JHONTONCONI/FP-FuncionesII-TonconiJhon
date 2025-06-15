//Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo
//utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función
//sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el
//resultado de la hipotenusa calculada.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double cateto1, cateto2, hipotenusa, sumacuadrados;
	cout<<"\n\n               ************************"<<endl;
	cout<<"               CALCULO DE LA HIPOTENUSA"<<endl;
	cout<<"               ************************"<<endl;
	cout<<"\n\n     **********************************"<<endl;
	cout<<"     INGRESE EL VALOR DEL PRIMER CATETO"<<endl;
	cout<<"     **********************************"<<endl;
	cin>>cateto1;
	cout<<"\n\n     **********************************"<<endl;
	cout<<"     INGRESE EL VALOR DEL SEGUNDO CATETO"<<endl;
	cout<<"     ***********************************"<<endl;
	cin>>cateto2;
	sumacuadrados= cateto1*cateto1 + cateto2*cateto2;
	hipotenusa=sqrt(sumacuadrados);
	cout<<"\n\n     **************************************"<<endl;
	cout<<"     EL VALOR DE LA HIPOTENUSA ES: "<<hipotenusa<<endl;
	cout<<"     **************************************"<<endl;
	
}
