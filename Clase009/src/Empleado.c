/*
 * Empleado.c
 *
 *  Created on: 17 sep. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Empleado.h"

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

int initLugarLibreEmpleado(struct sEmpleado *aEmpleado, int cantidad) {
	int i;
	int retorno = -1;
	if (aEmpleado != NULL && cantidad > 0) {
		retorno = 0;
		for (i = 0; i < cantidad; i++) {
			aEmpleado[i].status = STATUS_EMPTY;
		}
	}
	return retorno;
}

int buscarLugarLibreEmpleado(struct sEmpleado *aEmpleado, int cantidad) {
	int index = -1;
	int i;
	if (aEmpleado != NULL && cantidad > 0) {
		for (i = 0; i < cantidad; i++) {
			if (aEmpleado[i].status == STATUS_EMPTY) {
				index = i;
				break;
			}
		}
	}
	return index;
}

int altaEmpleadoPorId(struct sEmpleado *aEmpleado, int cantidad,
		struct sEmpleado empleado) {
	int i;
	int retorno = -1;
	i = buscarLugarLibreEmpleado(aEmpleado, cantidad);
	if (aEmpleado != NULL && cantidad > 0 && i != -1) {
		empleado.status = STATUS_NOT_EMPTY;
		aEmpleado[i] = empleado;
		retorno = EXIT_SUCCESS;
	}
	return retorno;
}

int buscarEmpleadoPorId(struct sEmpleado *aEmpleado, int cantidad, int id){
	int index = -1;
	int i;
	if (aEmpleado != NULL && cantidad > 0) {
		for (i = 0; i < cantidad; i++) {
			if (aEmpleado[i].status == STATUS_NOT_EMPTY) {
				index = i;
				break;
			}
		}
	}
	return index;
}

int bajaEmpleadoPorId(struct sEmpleado *aEmpleado, int cantidad, int id) {

}

int ordenarArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad) {
	int i;
	int retorno = -1;
	struct sEmpleado bEmpleado;
	int fSwap;
	if (aEmpleado != NULL && cantidad > 0) {
		retorno = 0;
		do {
			fSwap = 0;
			for (i = 0; i < cantidad - 1; i++) {
				if (strncmp(aEmpleado[i].nombre, aEmpleado[i + 1].nombre,
				QTY_CARACTERES) > 0) {
					fSwap = 1;
					bEmpleado = aEmpleado[i];
					aEmpleado[i] = aEmpleado[i + 1];
					aEmpleado[i + 1] = bEmpleado;
				} else if (strncmp(aEmpleado[i].nombre, aEmpleado[i + 1].nombre,
				QTY_CARACTERES) == 0) {
					if (strncmp(aEmpleado[i].apellido,
							aEmpleado[i + 1].apellido,
							QTY_CARACTERES) > 0) {
						fSwap = 1;
						bEmpleado = aEmpleado[i];
						aEmpleado[i] = aEmpleado[i + 1];
						aEmpleado[i + 1] = bEmpleado;
					}
				}
			}
		} while (fSwap);
	}
	return retorno;
}

int imprimirArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad) {
	int i;
	int retorno = -1;
	if (aEmpleado != NULL && cantidad > 0) {
		retorno = 0;
		for (i = 0; i < cantidad; i++) {
			printf("Id: %d - Nombre: %s - Apellido: %s \n",
					aEmpleado[i].idEmpleado, aEmpleado[i].nombre,
					aEmpleado[i].apellido);
		}
	}
	return retorno;
}
