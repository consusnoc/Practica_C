//Sacar la hipotenusa de un triangulo rectangulo, pidiendo al usuario el valor de los 2 catetos

#include<stdio.h>
#include<math.h>

int main(){
	float a=0, b=0, h=0;
	
	printf("Ingresar el valor de los catetos: ");
	scanf("%f %f", &a, &b);
	
	h=sqrt(pow(a,2)+ pow(b,2)); //el pow se pone primero el exponente y luego la potencia
	
	printf("El valor de la hipotenusa es: %.2f", h);
	
	
}
