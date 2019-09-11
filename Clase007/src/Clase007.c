/*
 ============================================================================
 Name        : Clase007.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#define QTY_EMPLEADOS 10
#define QTY_ELEMENTOS 5
#define QTY_DNI 8

int imprimeArrayInt(int array[], int limite);
int initArrayInt(int array[], int limite, int valor);
int getArrayInt(int array[], int limite, char *mensaje, char *mensajeError,
		int minimo, int maximo, int reintentos);
int maximoArrayInt(int array[], int limite, int *pResultado);
int minimoArrayInt(int array[], int limite, int *pResultado);
int promedioArrayInt(int array[], int limite, float *pResultado);
int getInt(int *pResultado, char *pMensaje, char *pMensajeError, int minimo,
		int maximo, int reintentos);
int ordenarArrayInt(int array[], int limite);
int getString(char *pResultado, char *pMensaje, char *pMensajeError, int minimo,
		int maximo, int reintentos);
char imprimeArrayString(char array[][50], int qty);
int ordenarArrayString(char array[][50], int limite);

int main(void) {
	//int edadesEmpleados[QTY_EMPLEADOS] = { 22, 1, 44, 2, 1, 88 };
	//int cantidadDatos = 6;
	//int test;

	char aNombres[QTY_ELEMENTOS][50];
	char nombre[50];
	char aDni[QTY_ELEMENTOS][8];
	char dni[8];
	int i;
	//getString(nombre, "\nIngrese el nombre:", "Error\n", 2, 10, 2);
	//printf("El nombre es %s", nombre);
	for (i = 0; i < QTY_ELEMENTOS; i++) {
		getString(nombre, "Ingrese el nombre: ", "Error\n", 2, 10, 2);
		getString(dni, "Ingrese el dni: ", "Error\n", 7, 8, 2);
		strcpy(aNombres[i], nombre);
		strcpy(aDni[i], dni);
	}
	imprimeArrayString(aNombres, QTY_ELEMENTOS);
//	ordenarArrayString(aNombres, QTY_ELEMENTOS);
//	imprimeArrayString(aNombres, QTY_ELEMENTOS);

	/*	for (i = 0; i < QTY_ELEMENTOS; i++) {
	 printf("%s\n", aNombre[i]);
	 }*/

	//cantidadDatos = getArrayInt(edadesEmpleados,QTY_EMPLEADOS,"Edad?\n","Error\n",0,200,2);
	/*	if (cantidadDatos > 0) {
	 imprimeArrayInt(edadesEmpleados, cantidadDatos);
	 ordenarArrayInt(edadesEmpleados, cantidadDatos);
	 imprimeArrayInt(edadesEmpleados, cantidadDatos);
	 maximoArrayInt(edadesEmpleados, cantidadDatos, &test);
	 }
	 */
	/*
	 if(initArrayInt(edadesEmpleados,QTY_EMPLEADOS,10) == 0)
	 {
	 imprimeArrayInt(edadesEmpleados,QTY_EMPLEADOS);
	 }
	 */
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
		printf("\n\n-------\n");
		for (i = 0; i < limite; i++) {
			printf("%d\n", array[i]);
		}

	}
	return retorno;
}

char imprimeArrayString(char array[][50], int qty) {
	int i;
	int retorno = -1;
	if (array != NULL && qty > 0) {
		retorno = 0;
		printf("\n\n-------\n");
		for (i = 0; i < qty; i++) {
			printf("%s\n", array[i]);
		}
	}
	return retorno;
}

int getInt(int *pResultado, char *pMensaje, char *pMensajeError, int minimo,
		int maximo, int reintentos) {
	int retorno = -1;
	int buffer;
	do {
		printf("%s", pMensaje);
		__fpurge(stdin);
		if (scanf("%d", &buffer) == 1 && buffer >= minimo && buffer <= maximo) {
			*pResultado = buffer;
			retorno = 0;
			break;
		}
		printf("%s", pMensajeError);
		reintentos--;
	} while (reintentos >= 0);
	return retorno;
}

int getArrayInt(int array[], int limite, char *pMensaje, char *pMensajeError,
		int minimo, int maximo, int reintentos) {
	int i = 0;
	int buffer;
	char respuesta = 'n';
	int retorno = -1;
	if (array != NULL && limite > 0) {
		do {
			if (getInt(&buffer, pMensaje, pMensajeError, minimo, maximo,
					reintentos) == 0) {
				array[i] = buffer;
				i++;
				limite--;
			}
			printf("Continuar? (s/n)");
			__fpurge(stdin);
			scanf("%c", &respuesta);
		} while (respuesta == 's' && limite > 0);
		retorno = i;
	}
	return retorno;
}

int maximoArrayInt(int array[], int limite, int *pResultado) {
	int i;
	int retorno = -1;
	int maximo;
	int posMaximo;
	if (array != NULL && limite > 0) {
		retorno = 0;
		maximo = array[0];
		posMaximo = 0;
		for (i = 1; i < limite; i++) {
			if (array[i] > maximo) {
				maximo = array[i];
				posMaximo = i;
			}
		}
		*pResultado = posMaximo;
	}
	return retorno;
}

int ordenarArrayIntOld(int array[], int limite) {
	int i;
	int retorno = -1;
	int posMaximo;
	int auxiliar;
	if (array != NULL && limite > 0) {
		for (i = 0; i < limite; i++) {
			maximoArrayInt(array + i, limite - i, &posMaximo);
			auxiliar = array[i];
			array[i] = array[posMaximo + i];
			array[posMaximo + i] = auxiliar;
		}
	}
	return retorno;
}

int ordenarArrayInt(int array[], int limite) {
	int i;
	int flagSwap;
	int retorno = -1;
	int bufferInt;
	if (array != NULL && limite > 0) {
		retorno = 0;
		do {
			flagSwap = 0;
			for (i = 0; i < limite - 1; i++) {
				if (array[i] > array[i + 1]) {
					flagSwap = 1;
					bufferInt = array[i];
					array[i] = array[i + 1];
					array[i + 1] = bufferInt;
				}
			}
		} while (flagSwap);
	}
	return retorno;
}

int getString(char *pResultado, char *pMensaje, char *pMensajeError, int minimo,
		int maximo, int reintentos) {
	int retorno = -1;
	char buffer[4096];
	if (pResultado != NULL && pMensaje != NULL && pMensajeError != NULL
			&& minimo <= maximo && reintentos >= 0) {
		do {
			printf("%s", pMensaje);
			__fpurge(stdin);
			fgets(buffer, sizeof(buffer), stdin);
			buffer[strlen(buffer) - 1] = '\0';
			if (strlen(buffer) >= minimo && strlen(buffer) <= maximo) {
				strncpy(pResultado, buffer, maximo + 1);
				retorno = 0;
				break;
			}
			printf("%s", pMensajeError);
			reintentos--;
		} while (reintentos >= 0);
	}
	return retorno;
}

int ordenarArrayString(char array[][50], int limite) {
	int i;
	int flagSwap;
	int retorno = -1;
	char bufferString[50];
	if (array != NULL && limite > 0) {
		retorno = 0;
		do {
			flagSwap = 0;
			for (i = 0; i < limite - 1; i++) {
				if (strcmp(array[i], array[i + 1])>0) {
					flagSwap = 1;
					strcpy(bufferString, array[i]);
					strcpy(array[i], array[i + 1]);
					strcpy(array[i + 1], bufferString);
				}
			}
		} while (flagSwap);
	}
	return retorno;
}


int getStringNum(char *pResultado, char *pMensaje, char *pMensajeError, int minimo,
		int maximo, int reintentos) {
	int retorno = -1;
	char buffer[4096];
	if (pResultado != NULL && pMensaje != NULL && pMensajeError != NULL
			&& minimo <= maximo && reintentos >= 0) {
		do {
			printf("%s", pMensaje);
			__fpurge(stdin);
			fgets(buffer, sizeof(buffer), stdin);
			buffer[strlen(buffer) - 1] = '\0';
			if (strlen(buffer) >= minimo && strlen(buffer) <= maximo) {
				strncpy(pResultado, buffer, maximo + 1);
				retorno = 0;
				break;
			}
			printf("%s", pMensajeError);
			reintentos--;
		} while (reintentos >= 0);
	}
	return retorno;
}
