#include "funcionbarco.h"

void compro(int y, int x){
	if(y<0){
		navegaralsur(x,y);
	}
	if(y>0){
	navegandoalNorte(x,y);
	}
	if(x<0){
	navegandoalOeste(x,y);
	}
	if(x>0){
	navegandoalEste(x,y);
	}
}
	void mensajebienvenida(){
		printf("Bienvenido al barco!\n");
	}
	void imprimirposicion(int x,int y){
		printf("Hola tu barco esta en la pisicion: %d,%d\n",x,y);
	}
	void navegaralsur(int x,int y){
		printf("Navegando al sur!\n");
		x++;
		y+=10;
	}
	void navegandoalNorte(int x,int y){
		printf("Navegando al Norte!\n");
	}
	void navegandoalOeste(int x,int y){
		printf("Navegando al Oeste!\n");
	}
	void navegandoalEste(int x,int y){
		printf("Navegando al Este!\n");
	}
