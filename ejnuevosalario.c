/*Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior*/

#include<stdio.h>

int main(){
	float sal=0,nvo_sal=0,aumento=0;
	
	printf("Ingrese su salario anterior: ");
	scanf("%f", &sal);
	
	aumento= sal*0.25; //si pongo 1.25 me sale directamente el nuevo salario
	
	nvo_sal= sal+aumento;
	
	printf("El nuevo salario es: $%.2f", nvo_sal);
	
	
	return 0;
}
