/*
 * pantalla.h
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */

#ifndef PANTALLA_H_
#define PANTALLA_H_

#define QTY_PantallaS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

struct sPantalla {
	int idPantalla;
	int statusPantalla;
	//***************
	char nombrePantalla[50];
	char direccionPantalla[50];
	char precioPantalla[50];
	char tipoPantalla[4];

};
int initLugarLibrePantalla(struct sPantalla *aPantalla, int cantidad);
int buscarLugarLibrePantalla(struct sPantalla *aPantalla, int cantidad);
int buscarPantallaPorId(struct sPantalla *aPantalla, int cantidad, int id);
int bajaPantallaPorId(struct sPantalla *aPantalla, int cantidad, int id);
int modificarPantallaPorId(struct sPantalla *aPantalla, int cantidad,
		struct sPantalla pantalla);
int altaPantallaPorId(struct sPantalla *aPantalla, int cantidad,
		struct sPantalla pantalla);
static int generarId(void);

int imprimirArrayPantalla(struct sPantalla *aPantalla, int cantidad);
int ordenarArrayPantalla(struct sPantalla *aPantalla, int cantidad);

#endif /* PANTALLA_H_ */
