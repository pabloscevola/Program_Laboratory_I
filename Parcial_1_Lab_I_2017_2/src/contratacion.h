/*
 * contratacion.h
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */

#ifndef CONTRATACION_H_
#define CONTRATACION_H_

#include "pantalla.h"

#define QTY_PantallaS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

struct sContratacion {
	int statusContratacion;
	int cuitCliente;
	char cantidadDias[50];
	char nombreArchivo[50];
	struct sPantalla pantallaContratada;
};

int buscarLugarLibreContratacion(struct sContratacion *aContratacion,
		int cantidad);
int altaContratacion(struct sContratacion *aContratacion, int cantidad,
		struct sContratacion contratacion);
int buscarContratacionPorCuit(struct sContratacion *aContratacion, int cantidad,
		int cuit);
int bajaContratacionPorCuit(struct sContratacion *aContratacion, int cantidad,
		int cuit);

/*
 int modificarPantallaPorId(struct sPantalla *aPantalla, int cantidad,
 struct sPantalla pantalla, struct sPantalla pantallaNueva);
 */
int modificarContratacionPorCuit(struct sContratacion *aContratacion,
		int cantidad, int cuit, struct sContratacion contratacion);

int imprimirArrayPantalla(struct sPantalla *aPantalla, int cantidad);
int ordenarArrayPantalla(struct sPantalla *aPantalla, int cantidad);

#endif /* CONTRATACION_H_ */
