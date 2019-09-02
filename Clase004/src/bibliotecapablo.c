#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "bibliotecapablo.h"


int getInt(	int *resultado,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = EXIT_ERROR;
	int bufferInt;
	if(	resultado != NULL &&
		mensaje	!= NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			__fpurge(stdin); // fflush en Windows
			if(scanf("%d",&bufferInt)==1)
			{
				if(bufferInt >= minimo && bufferInt <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = bufferInt;
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}



float getFloat(	float *resultado,
				char *mensaje,
				char *mensajeError,
				float minimo,
				float maximo,
				int reintentos)
{
	int retorno = EXIT_ERROR;
	float bufferFloat;
	if(	resultado != NULL &&
		mensaje	!= NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			__fpurge(stdin); // fflush en Windows
			if(scanf("%f",&bufferFloat)==1)
			{
				if(bufferFloat >= minimo && bufferFloat <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = bufferFloat;
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}



char getChar(	char *letra,
				char *mensaje,
				char *mensajeError,
				char minimo,
				char maximo,
				int reintentos)
{
	int retorno = EXIT_ERROR;
	char bufferChar;
	if(	letra != NULL &&
		mensaje	!= NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			__fpurge(stdin); // fflush en Windows
			if(scanf("%c",&bufferChar)==1)
			{
				if(bufferChar >= minimo && bufferChar <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*letra = bufferChar;
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}












