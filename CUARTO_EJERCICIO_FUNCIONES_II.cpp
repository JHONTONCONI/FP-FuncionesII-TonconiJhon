//Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
//ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
//calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
//raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.
#include <iostream>
#include <cmath>
using namespace std;
int main (){
	double a, b, c, solucion1, solucion2, discriminante;
	cout<<"\n\n     ************************************************"<<endl;
	cout<<"     CALCULO DE LAS RAICES DE UNA ECUACION CUADRATICA"<<endl;
	cout<<"     ************************************************"<<endl;
	cout<<endl;
	cout<<"Ingrese el coeficiente principal: ";cin>>a;
	if (a!=0){
	cout<<"Ingrese el coeficiente secundario: ";cin>>b;
	cout<<"Ingrese el coeficiente independiente: ";cin>>c;
	discriminante=b*b-4*a*c;
	if (discriminante>=0){
		solucion1 = (-b-sqrt(discriminante))/2*a;
		solucion2 = (-b+sqrt(discriminante))/2*a;
	}else{
		solucion1 = (-b-sqrt(discriminante))/2*a;
		solucion2 = (-b+sqrt(discriminante))/2*a;
		cout<<"No hay solucion en los reales"<<endl;
		return 0;
	}
	cout<<"La primera solucion es: "<<solucion1<<endl;
	cout<<"La segunda solucion es: "<<solucion2<<endl;
    }else{
    	cout<<"EL VALOR DEL COEFICIENTE PRINCIPAL NO PUEDE SER 0"<<endl;
	}
	return 0;
}
