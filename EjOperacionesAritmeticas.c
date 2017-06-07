//Operaciones Aritmeticas

#include<stdio.h>

int main(){
	int a,b,c,sum,res,mult;
	float div=0;
	
	a=b=c=sum=res=mult=0;
	
	printf("\nIngrese 2 numeros: ");
	scanf("%i %i",&a,&b); 
	
	sum= a+b;
	res= a-b;
	mult= a*b;
	div= (float)a/b;

	printf("\nLa suma es: %i",sum);
	printf("\nLa resta es: %i",res);
	printf("\nLa multiplicacion es: %i",mult);
	printf("\nLa division es: %.2f", div);
	
	
	return 0;
}
