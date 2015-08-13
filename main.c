#include <stdio.h>
#include "calculadora.h"
int main (void)
{
	int a,b,c,o;
	printf("Calculadora para 2 numeros, digite 1 para realizar suma, 2 para resta, 3 para multiplicacion, 4 para division");
	scanf("%d",&o);
	printf("Ingrese el primer valor");
	scanf("%d",&a);
	printf("Ingrese el segundo valor");
	scanf("%d",&b);
	switch(o){
		case 1: c=suma(a,b);
		break;
		case 2: c=resta(a,b);
		break;
		case 3: c=multiplicacion(a,b);
		break;
		case 4: c=division(a,b);
		break;
		default: c=0;
	}
	printf("El resultado es %d","c");
return 0;
}
