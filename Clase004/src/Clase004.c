/*
 ============================================================================
 Name        : Clase004.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecapablo.h"

#define EXIT_ERROR -1

/*
int main(void)
{
	int resultado;
	if(getInt(&resultado,"Edad?\n","Error\n",0,150,2)==0)
	{
		printf("El resultado es: %d",resultado);
	}
	return EXIT_SUCCESS;
}
*/



int main(void)
{
	float resultado;
	if(getFloat(&resultado,"Porcentaje de Lisoform?\n","Error\n",0.1,99.9,2)==0)
	{
		printf("El resultado es: %f",resultado);
	}
	return EXIT_SUCCESS;
}

/*
int main(void)
{
	char letra;
	if(getChar(&letra,"La letra es\n","Error\n",'a','z',2)==0)
	{
		printf("La letra es: %c",letra);
	}
	return EXIT_SUCCESS;
}
*/









