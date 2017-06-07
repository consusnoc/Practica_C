#include<stdio.h> //VA SIEMPRE, es una libreria con las funciones basicas (standard, input, output,header)

int main(){
	
	float c=0, f=0;
	
	printf("Ingrese los grados celsius a convertir");
	scanf("%f",&c);
	
	f=(1.8*c)+32;

	printf("El resultado en fahrenheit es: %.1f",f);
	
	return 0; 
}
