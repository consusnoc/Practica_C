/*Una tienda ofrece un dto del 15% sobre el total de la compra 
y un cliente desea saber cuanto debera pagar finalmente por su compra*/

#include<stdio.h>

int main(){
	float compra=0, prefi=0 ;
	
	printf("Ingrese el valor de su compra: ");
	scanf("%f", &compra);
	
	prefi= compra*0.85;
	
	printf("El precio final que debera pagar es: %.1f", prefi);
	
	return 0;
}
