/*
 * pantalla.c
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "pantalla.h"

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

int initLugarLibrePantalla(struct sPantalla *aPantalla, int cantidad) {
	int i;
	int retorno = -1;
	if (aPantalla != NULL && cantidad > 0) {
		retorno = 0;
		for (i = 0; i < cantidad; i++) {
			aPantalla[i].statusPantalla = STATUS_EMPTY;
		}
	}
	return retorno;
}

int buscarLugarLibrePantalla(struct sPantalla *aPantalla, int cantidad) {
	int index = -1;
	int i;
	if (aPantalla != NULL && cantidad > 0) {
		for (i = 0; i < cantidad; i++) {
			if (aPantalla[i].statusPantalla == STATUS_EMPTY) {
				index = i;
				break;
			}
		}
	}
	return index;
}

static int generarId(void) {
	static int id = 0;
	id++;
	return id;
}

int altaPantallaPorId(struct sPantalla *aPantalla, int cantidad,
		struct sPantalla pantalla) {
	int i;
	int retorno = -1;
	i = buscarLugarLibrePantalla(aPantalla, cantidad);
	if (aPantalla != NULL && cantidad > 0 && i != -1) {
		aPantalla[i] = pantalla;
		aPantalla[i].statusPantalla = STATUS_NOT_EMPTY;
		aPantalla[i].idPantalla = generarId();
		retorno = EXIT_SUCCESS;
	}
	return retorno;
}

int buscarPantallaPorId(struct sPantalla *aPantalla, int cantidad, int id) {
	int retorno = -1;
	int i;
	if (aPantalla != NULL && cantidad > 0) {
		for (i = 0; i < cantidad; i++) {
			if (aPantalla[i].statusPantalla == STATUS_NOT_EMPTY) {
				if (aPantalla[i].idPantalla == id) {
					retorno = i;
					break;
				}
			}
		}
	}
	return retorno;
}

int bajaPantallaPorId(struct sPantalla *aPantalla, int cantidad, int id) {
	int i;
	int retorno = -1;
	i = buscarPantallaPorId(aPantalla, cantidad, id);
	if (aPantalla != NULL && cantidad > 0 && i != -1) {
		aPantalla[i].statusPantalla = STATUS_EMPTY;
		retorno = EXIT_SUCCESS;
	}
	return retorno;
}
/*
 int modificarPantallaPorId(struct sPantalla *aPantalla, int cantidad,
 struct sPantalla pantalla, struct sPantalla pantallaNueva) {
 int i;
 int retorno = -1;
 i = buscarPantallaPorId(aPantalla, cantidad, pantalla.idPantalla);
 if (aPantalla != NULL && cantidad > 0 && i != -1) {
 pantallaNueva.idPantalla = aPantalla[i].idPantalla;
 aPantalla[i] = pantallaNueva;
 aPantalla[i].statusPantalla = STATUS_NOT_EMPTY;
 retorno = EXIT_SUCCESS;
 }
 return retorno;
 }
 */
int modificarPantallaPorId(struct sPantalla *aPantalla, int cantidad,
		struct sPantalla pantalla) {
	int i;
	int retorno = -1;
	i = buscarPantallaPorId(aPantalla, cantidad, id);
	if (aPantalla != NULL && cantidad > 0 && i != -1) {
		aPantalla[i] = pantalla;
		aPantalla[i].statusPantalla = STATUS_NOT_EMPTY;
		retorno = EXIT_SUCCESS;
	}
	return retorno;
}

int listarArrayPantallas(struct sPantalla *aPantalla, int cantidad) {
	int i;
	int retorno = -1;
	if (aPantalla != NULL && cantidad > 0) {
		retorno = 0;
		for (i = 0; i < cantidad; i++) {
			if (aPantalla[i].statusPantalla == STATUS_NOT_EMPTY) {
				printf(
						"Id: %d - Nombre: %s - Direccion: %s  - Precio: %s  - Tipo: %s \n",
						aPantalla[i].idPantalla, aPantalla[i].nombrePantalla,
						aPantalla[i].direccionPantalla,
						aPantalla[i].precioPantalla, aPantalla[i].tipoPantalla);
			}
		}
	}
	return retorno;
}

