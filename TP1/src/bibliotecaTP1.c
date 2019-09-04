#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "bibliotecaTP1.h"

float getFloat(float *resultado, char *mensaje, char *mensajeError,
		float minimo, float maximo, int reintentos) {
	int retorno = EXIT_ERROR;
	float bufferFloat;
	if (resultado != NULL && mensaje != NULL && mensajeError != NULL
			&& minimo < maximo && reintentos >= 0) {
		do {
			printf("%s", mensaje);
			__fpurge(stdin); // fflush en Windows
			if (scanf("%f", &bufferFloat) == 1) {
				if (bufferFloat >= minimo && bufferFloat <= maximo) {
					retorno = EXIT_SUCCESS;
					*resultado = bufferFloat;
					break;
				}
			}
			printf("%s", mensajeError);
			reintentos--;
		} while (reintentos >= 0);
	}
	return retorno;
}

float Suma(float operandoUno, float operandoDos) {
	float suma;
	suma = operandoUno + operandoDos;
	return suma;
}

float Resta(float operandoUno, float operandoDos) {
	float resta;
	resta = operandoUno - operandoDos;
	return resta;
}

float Division(float operandoUno, float operandoDos) {
	float division;
	if (operandoDos == 0) {
		return EXIT_ERROR;
	} else {
		division = operandoUno / operandoDos;
		return division;
	}
}

float Multiplicacion(float operandoUno, float operandoDos) {
	float multiplicacion;
	multiplicacion = operandoUno * operandoDos;
	return multiplicacion;
}

float Factorial(float operandoFactorial) {
	float factorial;
	if (operandoFactorial == 0 || operandoFactorial == 1) {
		return 1;
	} else {
		if (operandoFactorial < 0) {
			return -1;
		} else {
			while (operandoFactorial > 1) {
				factorial = factorial * operandoFactorial;
				operandoFactorial--;
			}
			return factorial;
		}
	}
}
