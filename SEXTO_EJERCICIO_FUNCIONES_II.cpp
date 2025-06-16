//Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y
//tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora
//generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las
//reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el
//resultado final indicando el ganador del juego
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int azar, eleccion, contadorhumano, contadormaquina;
	contadorhumano=0;
	contadormaquina=0;
	while (contadorhumano<3 and contadormaquina<3){
		cout<<"ELIJE PIEDRA(1), PAPEL(2) O TIJERA(3)"<<endl;
		cin>>eleccion;
		azar=1+rand()%3;
		cout<<azar<<endl;
		cout<<endl;
		if(eleccion<4 and eleccion>0){
		
		if(eleccion!=azar){
			if((eleccion==1 and azar ==3) or (eleccion==2 and azar ==1) or(eleccion==3 and azar ==2)){
				cout<<"GANASTE LA RONDA"<<endl;
				contadorhumano++;
			}else{
				cout<<"LA COMPUTADORA GANO LA RONDA"<<endl;
				contadormaquina++;
			}
		}else{
			cout<<"IGUALES"<<endl;
			cout<<endl;
		}
	  }else{
	  	cout<<"NO DIO EL VALOR CORRECTO"<<endl;
	  	return 0;
	  }
	}
	if(contadorhumano>contadormaquina){
		cout<<"USTED GANO LA PARTIDA"<<endl;
	}else{
		cout<<"PERDISTE, LA COMPUTADORA GANO LA PARTIDA"<<endl;
	}
	return 0;
}
