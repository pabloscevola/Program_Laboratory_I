/*
 ============================================================================
 Name        : Clase009.c
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
#include "utn.h"
#include "Empleado.h"

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1
#define QTY_EMPLEADOS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

int main(void) {

	struct sEmpleado aEmpleados[QTY_EMPLEADOS];
	initLugarLibreEmpleado(aEmpleados, QTY_EMPLEADOS);
	buscarLugarLibreEmpleado(aEmpleados, QTY_EMPLEADOS);




	/*
	 struct sEmpleado bEmpleado;
	 int i;
	 int idEmpleado = 0;

	 printf("Ingrese la opcion que desea\n ");
	 printf("1. Alta de empleado.\n ", );
	 printf("2. Baja de empleado.\n ", );
	 printf("3. Modificar de empleado.\n " "
	 printf("4. Informar resultados\n "
	 "5. Salir\n");

	 for (i = 0; i < 3; i++) {

	 getString(bEmpleado.nombre, "Ingrese el nombre", "ERROR", 1, 49,
	 2);

	 getString(bEmpleado.apellido, "Ingrese el apellido", "ERROR", 1,
	 49, 2);

	 bEmpleado.idEmpleado = idEmpleado;
	 idEmpleado++;
	 bEmpleado.status = STATUS_NOT_EMPTY;

	 aEmpleados[i] = bEmpleado;
	 }
	 imprimirArrayEmpleados(aEmpleados, 3);

	 return EXIT_SUCCESS;

	 */
}
