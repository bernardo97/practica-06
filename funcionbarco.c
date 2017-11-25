#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "funcionbarco.h"

	
void main() {
	srand(time(NULL));
	int x=0;
	int y=0;
	x+=rand()%9;
	y+=rand()%9;
		printf("Hola tu barco esta en la pisicion: %d,%d\n",&x,&y);
		int *dirx=&x;
		printf("La direccion de x es: %d\n",dirx);
	mensajebienvenida();
	imprimirposicion(x,y);
	compro();
}
