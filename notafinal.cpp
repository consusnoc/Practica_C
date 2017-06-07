/*Un alumno desea saber cual sera su calificacion final en la materia de Algoritmos.
Dicha calificacion se compone de los siguientes porcentajes:
55% del promedio de sus tres calificaciones parciales
30% de la calificacion del examen final
15% de la calificacion de un trabajo final*/

#include<stdio.h>

int main(){
	float cal_final, cal_1, cal_2, cal_3, promedio_cal, ex_fn, ex_fn_porc, tr_fn, tr_fn_porc;
	
	printf("\nIngrese sus tres primeras calificaciones parciales");
	scanf("%f %f %f", &cal_1, &cal_2, &cal_3);
	
	printf("\nIngrese la nota del examen final: ");
	scanf("%f", &ex_fn);
	
	printf("\nIngrese la nota del trabajo final: ");
	scanf("%f", &tr_fn);
	
	
	promedio_cal= ((cal_1+cal_2+cal_3)/3)*0.55;
	ex_fn_porc= ex_fn*0.30;
	tr_fn_porc= tr_fn*0.15;
	
	cal_final= promedio_cal+ex_fn_porc+tr_fn_porc;
	
	
	printf("Tu calificacion final de Algoritmos es: %.2f", cal_final);
	
	
	return 0;
}
