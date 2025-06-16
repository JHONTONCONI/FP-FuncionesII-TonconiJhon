//Simulación de Tragamonedas Simple: Crea un programa que simule una máquina tragamonedas.
//El usuario inicia con 100 monedas y puede apostar entre 1 y 10 por turno. Se generan tres números
//aleatorios entre 1 y 5. Si los tres son iguales, gana 10 veces su apuesta. Si hay dos iguales, gana el
//doble. Si forman una escalera (por ejemplo como 2-3-4 o 4-3-2), gana 5 veces su apuesta. En
//cualquier otro caso, pierde lo apostado. El juego continúa hasta que el jugador se quede sin monedas
//o decida salir. Usa funciones y números aleatorios
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int tragamonedas(int winlose){
	int a, b, c;
	a=rand()%3+2;
	b=rand()%3+2;
	c=rand()%3+2;
	if(a==b and b==c){
		winlose=winlose*10;
		return winlose;
		
	}else{
		if(a==b or a==c or b==c){
			winlose=winlose*2;
			return winlose;
			
		}else{
			if ( (a-1==b and a-2==c) or (c+1==b and c+2==a)){
				winlose=winlose*5;
				return winlose;
				
			}else{
				winlose= winlose*(-1);
				return winlose;
				
			}
		}
	}
}
int main(){
	srand(time(0));
	int apuesta, credito, resultado;
	char decision;
	credito=100;
	while(credito>0 and decision!=n){
		cout<<"Su credito actual es: "<<credito<<endl;
		cout<<"Ingrese la cantidad de creditos a apostar (max 10)"<<endl;
		cin>>apuesta;
		if(apuesta>0 and apuesta<=10){
			resultado= tragamonedas(apuesta);
			credito=credito+resultado;
			cout<<"Apuesta realizada con exito"<<endl;
			cout<<endl;
		}else{
			cout<<"NO INGRESO EL CREDITO ADECUADO, pierde creditos"<<endl;
			credito--;
		}
		cout<<"DESEA SEGUIR APOSTANDO? SI(s)-NO(n)"<<endl;
		cin>>decision;
		if (decision!=n and decision!=s){
			cout<<"No contesto correctamente la pregunta, pierde creditos"<<endl;
			credito--;
			cout<<endl;
		}else{
			cout<<endl;
		}
	}
	if(credito<=0){
		cout<<"CREDITOS ACABADOS, GRACIAS POR USAR EL PROGRAMA"<<endl;
	}else{
		cout<<"GRACIAS POR USAR EL PROGRAMA"<<endl;
		cout<<"CREDITO FINAL: "<<credito<<endl;
	}
	return 0;
}
