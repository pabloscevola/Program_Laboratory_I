/*
 ============================================================================
 Name        : Clase005.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define QTY_EMPLEADOS 1000
#define EXIT_ERROR -1

int imprimeArrayInt(int array[], int limite);
int initArrayInt(int array[], int limite, int valor);

/*
int main(void) {
	int edadesEmpleados[QTY_EMPLEADOS];

	if (initArrayInt(edadesEmpleados, QTY_EMPLEADOS, 10) == 0) {
		imprimeArrayInt(edadesEmpleados, QTY_EMPLEADOS);
	}
	return EXIT_SUCCESS;
}
*/

int main(void)
{
	int array[4];
	if(getArrayInt(array,2,"Edad?\n","Error\n",0,150,2)==0)
	{
		printf("El resultado es: %d",resultado);
	}
	return EXIT_SUCCESS;
}



int initArrayInt(int array[], int limite, int valor) {
	int i;
	int retorno = -1;
	if (array != NULL && limite > 0) {
		retorno = 0;
		for (i = 0; i < limite; i++) {
			array[i] = valor + i;
		}
	}
	return retorno;
}

int imprimeArrayInt(int array[], int limite) {
	int i;
	int retorno = -1;
	if (array != NULL && limite > 0) {
		retorno = 0;
		for (i = 0; i < limite; i++) {
			printf("%d\n", array[i]);
		}
	}
	return retorno;
}

int getArrayInt(int array[],
				int limite,
				char *mensaje,
				char *mensajeError,
				int minimo,
				int maximo,
				int reintentos)
{
	int retorno = EXIT_ERROR;
	int bufferArray;
	int i;
	if(	array != NULL &&
		mensaje	!= NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			__fpurge(stdin); // fflush en Windows
			if(scanf("%d",&bufferArray)==1)
			{
				if(bufferArray >= minimo && bufferArray <= maximo)
				{
					retorno = EXIT_SUCCESS;
					for (i = 0; i < limite; i++) {
					*array = bufferArray;
					}
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}


int maximoArrayInt(	int array[],
					int limite,
					int cantidaElementos,
					int *pResultado)
{

}


int minimoArrayInt(	int array[],
					int limite,
					int cantidaElementos,
					int *pResultado)
{

}

int promedioArrayInt(	int array[],
						int limite,
						int cantidaElementos,
						float *pResultado)
{

}
