/*
 ============================================================================
 Name        : Clase001.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*
	 int numero1;
	 int numero2;
	 int resultado;
	 printf("Ingrese el primer número \n");
	 scanf("%d", &numero1);
	 printf("Ingrese el segundo número \n");
	 scanf("%d", &numero2);
	 resultado = numero1 + numero2;
	 printf("El resultado es: %d", resultado);
	 */

	/*
	 int numero1;
	 int i = 0;
	 int numeroAcumulador = 0;
	 while (i == 0) {
	 printf("Ingrese un número: \n");
	 scanf("%d", &numero1);
	 numeroAcumulador = numeroAcumulador + numero1;
	 printf("Desesa continuar cargando? Ingrese 0\n");
	 scanf("%d", &flag);
	 }
	 printf("El resultado acumulado es: %d", numeroAcumulador);
	 return EXIT_SUCCESS;
	 */

	int numero;
	int maximo;
	int minimo;
	int i;
	int acumulador = 0;
	int promedio;

	for (i = 0; i < 5; i++) {
		printf("Ingrese un número: \n");
		scanf("%d", &numero);
		if (i == 0) {
			maximo = numero;
			minimo = numero;
		}
		if (numero > maximo) {
			maximo = numero;
		}
		if (numero < minimo) {
			minimo = numero;
		}
		acumulador = acumulador + numero;
	}
	promedio = acumulador / i;
	printf("El número máximo es: %d \n", maximo);
	printf("El número mínimo es: %d \n", minimo);
	printf("El promedio es: %d \n", promedio);
	return EXIT_SUCCESS;
}
