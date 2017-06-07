/*Calcular la cantidad de segundos que estan incluidos en el numero de horas, minutos y segundos
ingresados por el usuario*/

#include<stdio.h>

int main(){
	int hor, min, seg, cant_seg;
	
	printf("Ingresa las horas"); scanf("%i", &hor);
	
	printf("Ingresa los minutos"); scanf("%i", &min);
	
	printf("Ingresa los segundos"); scanf("%i", &seg);
	
	hor=hor*3600;
	min=min*60;
	
	cant_seg= hor+min+seg;
	
	printf("La cantidad de segundos es: %i ", cant_seg);
	return 0;
}
