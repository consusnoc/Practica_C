//Directivas de prepocesador y variables

#include <stdio.h>

#define PI 3.1496 //MACRO: es la constante

int y=5; //Es una variable global

int main(){
	int x=10; //Es una variable local
	
	float suma=0;
	
	suma= PI+x;
	
	printf("La suma es: %.2f", suma);
	return 0;
}

//%i es para imprimir valores enteros tmb para short y para unsigned int
//%f es para flotantes  .2f es que me imprime dos decimales despues de la coma
//%c es para char
//%li es para long int
//%lf es para long float
