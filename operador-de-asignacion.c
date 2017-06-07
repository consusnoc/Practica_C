//Operador de asignacion

#include <stdio.h>

int main(){
	int a, b,c;
	a=b=c=10;
	a += 10; //Es lo mismo a poner a= a+10
	a -= 5; //a= a-5
	a *= 2; // a= a *2;
	a /= 2; //a= a/2;
	
	printf("El valor de a es: %i %i %i", a,b,c);
	return 0;
}
