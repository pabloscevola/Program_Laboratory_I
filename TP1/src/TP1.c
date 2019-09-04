/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaTP1.h"

int main(void) {
	float operandoUnoRecibido;
	float operandoDosRecibido;
	int menu;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	float resultadoFactorialA;
	float resultadoFactorialB;
	printf("Ingrese la opcion que desea\n "
			"1. Ingresar primer operando\n "
			"2. Ingresar segundo operando\n "
			"3. Calcular todas las operaciones:\n "
			"a. Calcular la suma\n "
			"b. Calcular la resta\n "
			"c. Calcular la division\n "
			"d. Calcular la multiplicacion\n "
			"e. Calcular el factorial de ambos operandos\n "
			"4. Informar resultados\n "
			"5. Salir\n");
	scanf("%i", &menu);
	while (menu != 5) {
		switch (menu) {
		case 1: {
			printf("Ingrese primer operando\n");
			scanf("%f", &operandoUnoRecibido);
			break;
		}
		case 2: {
			printf("Ingrese segundo operando\n");
			scanf("%f", &operandoDosRecibido);
			break;
		}
		case 3: {
			resultadoSuma = Suma(operandoUnoRecibido, operandoDosRecibido);
			resultadoResta = Resta(operandoUnoRecibido, operandoDosRecibido);
			resultadoDivision = Division(operandoUnoRecibido,
					operandoDosRecibido);
			resultadoMultiplicacion = Multiplicacion(operandoUnoRecibido,
					operandoDosRecibido);
			resultadoFactorialA = Factorial(operandoUnoRecibido);
			resultadoFactorialB = Factorial(operandoDosRecibido);
			break;
		}
		case 4: {
			printf("El resultado de %f + %f es: %f\n", operandoUnoRecibido,
					operandoDosRecibido, resultadoSuma);
			printf("El resultado de %f - %f es: %f\n", operandoUnoRecibido,
					operandoDosRecibido, resultadoResta);
			printf("El resultado de %f '/' %f es: %f\n", operandoUnoRecibido,
					operandoDosRecibido, resultadoDivision);
			printf("El resultado de %f * %f es: %f\n", operandoUnoRecibido,
					operandoDosRecibido, resultadoMultiplicacion);
			printf("El factorial de %f es: %f y El factorial de %f es: %f\n",
					operandoUnoRecibido, resultadoFactorialA,
					operandoDosRecibido, resultadoFactorialB);
			break;
		}
		default: {
			printf("La opcion es incorrecta");
		}
		}
		printf("Ingrese la opcion que desea\n "
				"1. Ingresar primer operando\n "
				"2. Ingresar segundo operando\n "
				"3. Calcular todas las operaciones:\n "
				"a. Calcular la suma\n "
				"b. Calcular la resta\n "
				"c. Calcular la division\n "
				"d. Calcular la multiplicacion\n "
				"e. Calcular el factorial de ambos operandos\n "
				"4. Informar resultados\n "
				"5. Salir\n");
		scanf("%i", &menu);
	}
}
