/*Dadas las horas trabajadas de una persona y el valor por hora
Calcular su salario e imprimirlo*/

#include<stdio.h>

int main(){
	int hora=0, valor=0, salario=0;
	
	printf("Ingrese las horas trabajadas: ");
	scanf("%i", &hora);
	
	printf("Ingrese el valor por hora: ");
	scanf("%i", &valor);
	
	salario= hora*valor;
	
	printf("Su salario es de: $%i", salario);	
	return 0;
}
