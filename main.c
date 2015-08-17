#include<stdio.h>
#include"calculadora.h"

int main(void)
{
	int opcion,Valor1,Valor2,Resultado;
	
	printf("Que operacion descea realizar:\n 1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n");
	scanf("%d",&opcion);
	printf("Ingrese el primer numero a operar");
	scanf("%d",& Valor1);
	printf("Ingrese el segundo numero a operar");
	scanf(%d",& Valor2);
	
	switch(opcion)
	{
		case 1:
			Resultado=suman(Valor1,Valor2);
			break;
		
		case 2:
			Resultado=resta(Valor1,Valor2);
			break;
		
		case 3:
			Resultado=multiplicar(Valor1,Valor2);
			break;
		
		case 4:
			Resultado=dividir(Valor1,Valor2);
			break;
		
		default: 
				Resultado=0;
	}
	
	printf("el resultado es %d","d");
}