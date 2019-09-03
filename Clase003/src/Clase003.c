/*
 ============================================================================
 Name        : Clase003.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_DE_NUMEROS_PEDIDOS 5

int pedirNumero();
int calcularMaximo(int numero, int maximoNum, int flag);
int calcularMinimo(int numero, int minimoNum, int flag);
float calcularPromedio(int acumulador);

int main() {
	int numeroPedido;
	int i;
	int maxPedido;
	int minPedido;
	float promedio;
	int acumulador = 0;
	int flag = 0;
	for (i = 0; i < 5; i++) {
		numeroPedido = pedirNumero();
		acumulador = acumulador + numeroPedido;
		maxPedido = calcularMaximo(numeroPedido, maxPedido, flag);
		minPedido = calcularMinimo(numeroPedido, minPedido, flag);
		flag = 1;
	}
	promedio = calcularPromedio(acumulador);
	printf("El numero maximo es: %d\n", maxPedido);
	printf("El numero minimo es: %d\n", minPedido);
	printf("El promedio es: %.2f\n", promedio);
	return 0;
}

int pedirNumero() {
	int numero;
	printf("Ingrese un numero\n");
	scanf("%d", &numero);
	return numero;
}

int calcularMaximo(int numero, int maximoNum, int flag) {
	if (flag == 0 || numero > maximoNum) {
		maximoNum = numero;
	}
	return maximoNum;
}

int calcularMinimo(int numero, int minimoNum, int flag) {
	if (flag == 0 || numero < minimoNum) {
		minimoNum = numero;
	}
	return minimoNum;
}

float calcularPromedio(int acumulador) {
	float promedio;
	promedio = acumulador / CANTIDAD_DE_NUMEROS_PEDIDOS;
	return promedio;
}
