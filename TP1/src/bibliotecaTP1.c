#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "bibliotecaTP1.h"

float getFloat(float *presultado, char *pmensaje, char *pmensajeError,
		int reintentos) {
	int retorno = EXIT_ERROR;
	float bufferFloat;
	if (presultado != NULL && pmensaje != NULL && pmensajeError != NULL
			&& reintentos >= 0) {
		do {
			printf("%s", pmensaje);
			__fpurge(stdin);
			if (scanf("%f", &bufferFloat) == 1) {
				retorno = EXIT_SUCCESS;
				*presultado = bufferFloat;
				break;
			}
			printf("%s", pmensajeError);
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

float Division(float operandoUno, float operandoDos, float *pdivision) {
	if (operandoDos == 0) {
		return EXIT_ERROR;
	} else {
		*pdivision = operandoUno / operandoDos;
		return EXIT_SUCCESS;
	}
}

float Multiplicacion(float operandoUno, float operandoDos) {
	float multiplicacion;
	multiplicacion = operandoUno * operandoDos;
	return multiplicacion;
}

int Factorial(float operandoFactorial) {
	int factorial = 1;
	int operandoFactorialInt;
	operandoFactorialInt = (int) operandoFactorial;
	if (operandoFactorialInt == 0 || operandoFactorialInt == 1) {
		return 1;
	} else {
		if (operandoFactorialInt < 0) {
			return EXIT_ERROR;
		} else {
			while (operandoFactorialInt > 1) {
				factorial = factorial * operandoFactorialInt;
				operandoFactorialInt--;
			}
			return factorial;
		}
	}
}
