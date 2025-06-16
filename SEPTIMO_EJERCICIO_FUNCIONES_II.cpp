//Juego de Dados por Turnos: Desarrolla un programa que simule un juego entre dos jugadores que
//lanzan un dado por turnos. Cada dado genera un número aleatorio entre 1 y 6. El jugador que
//obtenga el número mayor gana la ronda. El primero en ganar 3 rondas será el ganador del juego.
//Muestra el resultado de cada ronda y el marcador acumulado. Usa funciones y números aleatorios
//(rand de cstdlib).
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int dado1( int turno1){
	turno1 = 1+rand()%6;
	return turno1;
}

int dado2(int turno2){
	turno2 = 1+rand()%6;
	return turno2;
}
	
int main (){
	srand(time(0));
	int lanzamiento1, lanzamiento2, contador1, contador2;
	contador1=0;
	contador2=0;
	cout<<"*********************SIMULADOR DE JUEGO DE DADOS*********************"<<endl;
	while(contador1<3 and contador2<3){
		
		lanzamiento1= dado1(lanzamiento1);
	    lanzamiento2= dado2(lanzamiento2);
	    
	    if(lanzamiento1!=lanzamiento2){
	    	
	    	if (lanzamiento1>lanzamiento2){
	    		contador1++;
	    		cout<<"VALOR DEL PRIMER LANZAMIENTO: "<<lanzamiento1<<endl;
				cout<<"VALOR DEL SEGUNDO LANZAMIENTO: "<<lanzamiento2<<endl;
				cout<<"CONTADOR DEL JUGADOR 1:  "<<contador1<<endl;
				cout<<"CONTADOR DEL JUGADOR 2:  "<<contador2<<endl;
				cout<<endl;
				
			}else{
				
				contador2++;
				cout<<"VALOR DEL PRIMER LANZAMIENTO: "<<lanzamiento1<<endl;
				cout<<"VALOR DEL SEGUNDO LANZAMIENTO: "<<lanzamiento2<<endl;
				cout<<"CONTADOR DEL JUGADOR 1:  "<<contador1<<endl;
				cout<<"CONTADOR DEL JUGADOR 2:  "<<contador2<<endl;
				cout<<endl;
			}
	    	
	    	
		}else{
			
			cout<<"VALOR DEL PRIMER LANZAMIENTO: "<<lanzamiento1<<endl;
			cout<<"VALOR DEL SEGUNDO LANZAMIENTO: "<<lanzamiento2<<endl;
			cout<<"VALORES IGUALES"<<endl;
			cout<<"CONTADOR DEL JUGADOR 1:  "<<contador1<<endl;
			cout<<"CONTADOR DEL JUGADOR 2:  "<<contador2<<endl;
			cout<<endl;
		}
	}
	cout<<endl;
	if (contador1==3){
		cout<<"EL JUGADOR 1 GANO LA PARTIDA"<<endl;
		
	}else{
		cout<<"EL JUGADOR 2 GANO LA PARTIDA"<<endl;
	}
	return 0;
}

