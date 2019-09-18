/*
 * Empleado.h
 *
 *  Created on: 17 sep. 2019
 *      Author: alumno
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#define QTY_EMPLEADOS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

struct sEmpleado {
	int idEmpleado;
	int status;
	//***************
	char nombre[50];
	char apellido[50];
};
int initLugarLibreEmpleado(struct sEmpleado *aEmpleado, int cantidad);

int imprimirArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad);
int ordenarArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad);

int buscarLugarLibreEmpleado(struct sEmpleado *aEmpleado, int cantidad);
int buscarEmpleadoPorId(struct sEmpleado *aEmpleado, int cantidad, int id);
int bajaEmpleadoPorId(struct sEmpleado *aEmpleado, int cantidad, int id);
int modificarEmpleadoPorId(struct sEmpleado *aEmpleado, int cantidad,
		struct sEmpleado empleado);
int altaEmpleadoPorId(struct sEmpleado *aEmpleado, int cantidad,
		struct sEmpleado empleado);

#endif /* EMPLEADO_H_ */
