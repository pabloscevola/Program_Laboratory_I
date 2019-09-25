/*
 * contratacion.c
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "contratacion.h"

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

int buscarLugarLibreContratacion(struct sContratacion *aContratacion,
		int cantidad) {
	int index = -1;
	int i;
	if (aContratacion != NULL && cantidad > 0) {
		for (i = 0; i < cantidad; i++) {
			if (aContratacion[i].statusContratacion == STATUS_EMPTY) {
				index = i;
				break;
			}
		}
	}
	return index;
}

int altaContratacion(struct sContratacion *aContratacion, int cantidad,
		struct sContratacion contratacion) {
	int i;
	int retorno = -1;
	i = buscarLugarLibreContratacion(aContratacion, cantidad);
	if (aContratacion != NULL && cantidad > 0 && i != -1) {
		aContratacion[i] = contratacion;
		aContratacion[i].statusContratacion = STATUS_NOT_EMPTY;
		retorno = EXIT_SUCCESS;
	}
	return retorno;
}

int buscarContratacionPorCuit(struct sContratacion *aContratacion, int cantidad,
		int cuit) {
	int retorno = -1;
	int i;
	if (aContratacion != NULL && cantidad > 0) {
		for (i = 0; i < cantidad; i++) {
			if (aContratacion[i].statusContratacion == STATUS_NOT_EMPTY) {
				if (aContratacion[i].cuitCliente == cuit) {
					retorno = i;
					break;
				}
			}
		}
	}
	return retorno;
}

int bajaContratacionPorCuit(struct sContratacion *aContratacion, int cantidad,
		int cuit) {
	int i;
	int retorno = -1;
	i = buscarContratacionPorCuit(aContratacion, cantidad, cuit);
	if (aContratacion != NULL && cantidad > 0 && i != -1) {
		aContratacion[i].statusContratacion = STATUS_EMPTY;
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
int modificarContratacionPorCuit(struct sContratacion *aContratacion,
		int cantidad, int cuit, struct sContratacion contratacion) {
	int i;
	int retorno = -1;
	i = buscarContratacionPorCuit(aContratacion, cantidad, cuit);
	if (aContratacion != NULL && cantidad > 0 && i != -1) {
		aContratacion[i] = contratacion;
		aContratacion[i].statusContratacion = STATUS_NOT_EMPTY;
		aContratacion[i].cuitCliente = cuit;
		retorno = EXIT_SUCCESS;
	}
	return retorno;
}

int listarArrayContratacion(struct sContratacion *aContratacion, int cantidad) {
	int i;
	int retorno = -1;
	if (aContratacion != NULL && cantidad > 0) {
		retorno = 0;
		for (i = 0; i < cantidad; i++) {
			if (aContratacion[i].statusContratacion == STATUS_NOT_EMPTY) {
				printf(
						"CUIT: %d - Cantidad de días: %s - Nombre de archivo: %s",
						aContratacion[i].cuitCliente,
						aContratacion[i].cantidadDias,
						aContratacion[i].nombreArchivo);
			}
		}
	}
	return retorno;
}

