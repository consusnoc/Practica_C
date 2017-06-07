//Tipos de datos

#include <stdio.h>

int main() {
	char a = 'e'; //tamaño= 1 byte  Rango:0..255
	short b =-15; //Tamaño=2bytes 
	unsigned int c= 128; //tamaño=2bytes Rango:0..65535
	long e=123356; //tamaño de 4 bytes Rango
	float n = 15.667; //Tamaño=4bytes 
	double m =15454.112125; //tamaño=8b
	
	printf("El elemento es: %lf", m);
	
	return 0;
}
