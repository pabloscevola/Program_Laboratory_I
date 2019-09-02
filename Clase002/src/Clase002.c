/*
 ============================================================================
 Name        : Clase002.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_INT 65535

int sumaEnteros(int primerValorSumar, int segundoValorSumar, int *resultado);

int main(void) {
	int primerValor;
	int segundoValor;
	int resultado;
	printf("Valor1?\n");
	scanf("%d", &primerValor);
	printf("Valor2?\n");
	scanf("%d", &segundoValor);
	if (sumaEnteros(primerValor, segundoValor, &resultado) == 0) {
		printf("El resultado es %d\n", resultado);
	} else {
		printf("Error");
	}
}

int sumaEnteros(int primerValorSumar, int segundoValorSumar, int *resultado) {
	int retorno = -1;
	long resultadoLong;
	int resultadoInt;
	resultadoLong = primerValorSumar + segundoValorSumar;
	if (resultadoLong <= MAX_INT) {
		retorno = 0;
		*resultado = (int) resultadoLong;
	}
	return retorno;
}
