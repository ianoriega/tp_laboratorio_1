#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "utn.h"
#include "arr.h"

/**
 * \brief ejecuta el menu de la calculadora
 * \param int flagOpcion1 permite saber si el primer operando fue cargado
 * \param int flagOpcion2 permite saber si el primer segundo fue cargado
 * \float operandoUno recibe el primer operando
 * \float operandoDos recibe el segundo operando
 */
int menu(int flagOpcion1, int flagOpcion2, float operandoUno, float operandoDos)
{
	printf("\n");
	printf("\n---------------------------------------------");
	printf("\n   Ingrese la opcion que desea realizar:");
	printf("\n---------------------------------------------");
	printf("\n");

	if(!flagOpcion1 && !flagOpcion2)
	{
		printf("\n1: Cargar primer operando (A = %.2f)",operandoUno);
		printf("\n2: Cargar segundo operando (B = %.2f)",operandoDos);
	}
	else if(!flagOpcion1 && flagOpcion2)
	{
		printf("\n1: Cargar primer operando (A = %.2f)",operandoUno);
		printf("\n2: Cargar segundo operando (B = y)");
	}
	else if(!flagOpcion2 && flagOpcion1)
	{
		printf("\n1: Cargar primer operando (A = x)");
		printf("\n2: Cargar segundo operando (B = %.2f)",operandoDos);
	}
	else
	{
		printf("\n1: Cargar primer operando (A = x)");
		printf("\n2: Cargar segundo operando (B = y)");
	}

	printf("\n3: Calcular todas las operaciones");
	printf("\n4: Informar resultados");
	printf("\n5: Salir");
	printf("\n---------------------------------------------");
	printf("\n");

	return 0;
}
