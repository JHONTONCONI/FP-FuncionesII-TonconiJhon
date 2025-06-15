//Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada
//calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde
//se almacenarán las raíces por referencia. Además, incluye una variable por referencia que indique si
//las raíces son reales o complejas. La función debe calcular las raíces utilizando la fórmula general y
//actualizar las variables correspondientes.
#include <iostream>
#include <cmath>
using namespace std;
void calcularRaices(int A, int B, int C, double &R1, double &R2, double DISCRIMINANTE, bool Validez){
	if (A!=0){
		DISCRIMINANTE=B*B-4*A*C;
	if (DISCRIMINANTE>=0){
		Validez=true;
		cout<<endl;
		cout<<"Las raices son reales"<<endl;
		R1 = (-B-sqrt(DISCRIMINANTE))/2*A;
		R2 = (-B+sqrt(DISCRIMINANTE))/2*A;
	}else{
		Validez=false;
		R1 = (-B-sqrt(DISCRIMINANTE))/2*A;
		R2 = (-B+sqrt(DISCRIMINANTE))/2*A;
		cout<<"Las raices son complejas, no hay solucion(NaN)"<<endl;
	}
    }else{
    	cout<<"EL VALOR DEL COEFICIENTE PRINCIPAL NO PUEDE SER 0"<<endl;
	}
}
int main (){
	double a, b, c, solucion1, solucion2, discriminante, VALIDEZ;
	cout<<"\n\n     ************************************************"<<endl;
	cout<<"     CALCULO DE LAS RAICES DE UNA ECUACION CUADRATICA"<<endl;
	cout<<"     ************************************************"<<endl;
	cout<<endl;
	cout<<"Ingrese el coeficiente principal: ";cin>>a;
	cout<<"Ingrese el coeficiente secundario: ";cin>>b;
	cout<<"Ingrese el coeficiente independiente: ";cin>>c;
	calcularRaices(a, b, c, solucion1, solucion2, discriminante, VALIDEZ);
	cout<<"La primera solucion es: "<<solucion1<<endl;
	cout<<"La segunda solucion es: "<<solucion2<<endl;
	return 0;
}
