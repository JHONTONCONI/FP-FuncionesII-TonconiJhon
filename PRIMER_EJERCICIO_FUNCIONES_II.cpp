//Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su
//radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el
//radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el
//resultado del área calculada
#include <iostream>
#include <cmath>
using namespace std;
int main (){
	double radio, area;
	cout<<"\n\n              ****************************"<<endl;
	cout<<"              CALCULO DEL AREA DEL CIRCULO"<<endl;
	cout<<"              ****************************"<<endl;
	cout<<endl;
	cout<<"\n\n     **************************"<<endl;
	cout<<"     INGRESE EL VALOR DEL RADIO"<<endl;
	cout<<"     **************************"<<endl;
	cin>>radio;
    area= pow(radio, 2)*M_PI;
    cout<<"\n\n     ********************"<<endl;
    cout<<"     EL AREA OBTENIDA ES:"<<endl;
    cout<<"     ********************"<<endl;
    cout<<"           "<<area<<endl;
    return 0;
}
