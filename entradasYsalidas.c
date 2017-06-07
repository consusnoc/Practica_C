//Entradas y Salidas

#include <stdio.h>

int main(){
	//int a= 10;
	//float b=15.5;
	//char c = 'e';
	
	
	//printf ("%i %f %c", a,b,c);
	
	//int a ;
	//float b;
	//char c;
	
	//printf("Digite el valor de la variable c:");
	//scanf("%c", &c); //Indica la posicion de memoria osea a
	
	//printf("El valor es: %c", c); 
	
	char x[50];
	
	printf("Digite su nombre:");
	//scanf("%s", &x); //Solo lee hasta que encuentre un espacio
	gets(x);
	printf("Tu nombre es: %s", x);
	
}
