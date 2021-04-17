#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "utn.h"
#include "arr.h"
#include "matOp.h"

/**
 * \brief Ejecuta opcion 1 de la calculadora
 * \param float puntero a variable que contendra el primer operando
 * \return retorna 0 para ok y -1 si no pudo validar argumentos
 */

int opcionUno(float* pPrimerOperando)
{
	int retorno = -1;

	if(pPrimerOperando != NULL)
	{
		retorno = 0;
		printf("\nIngrese 1er operando...");
		utn_getFloat(pPrimerOperando, 50,"\nA: ...", "\nParametro incorrecto", -100000000, 100000000, 1);

	}
	return retorno;
}


/**
 * \brief Ejecuta opcion 2 de la calculadora
 * \param float puntero a variable que contendra segundo operando
 * \return retorna 0 para ok y -1 si no pudo validar argumentos
 */
int opcionDos(float* pSegundoOperando)
{
	int retorno = -1;

	if(pSegundoOperando != NULL)
	{
		retorno = 0;
		printf("\nIngrese 2do operando...");
		utn_getFloat(pSegundoOperando, 50, "\nB: ...", "\nParametro incorrecto", -100000000, 100000000, 1);

	}
	return retorno;
}


/**
 * \brief Ejecuta la opcion 3 de la calculadora (realiza todas las operaciones matematicas)
 * \param float datoUno recibe el primer operando
 * \param float datoDos recibe el segundo operando
 * \param float* pResSuma recibe puntero donde se almacena el resultado de la suma
 * \param float* pResResta recibe puntero donde se almacena el resultado de la resta
 * \param float* pResDiv recibe puntero donde se almacena el resultado de la division
 * \param float* pResMul recibe puntero donde se almacena el resultado de la multiplicacion
 * \param float* pResFacUno recibe puntero donde se almacena el resultado del primer factorial
 * \param float* pResFacDos recibe puntero donde se almacena el resultado del segundo factorial
 * \return retorna 0 para ok y -1 si no pudo validar argumentos
 */
int opcionTres(float datoUno, float datoDos, float* pResSuma, float* pResResta, float* pResDiv, float* pResMul,
		                                                                 float* pResFactUno, float* pResFacDos)
{
	int retorno = -1;

	if(pResSuma!=NULL && pResResta!=NULL && pResDiv!=NULL && pResMul!=NULL && pResFactUno!=NULL &&
			                                                                      pResFacDos!=NULL)
	{
		if(matOp_suma(datoUno, datoDos, pResSuma)==0)
		{
			if(matOp_resta(datoUno, datoDos, pResResta)==0)
			{
				if(matOp_multiplicacion(datoUno, datoDos, pResMul)==0)
				{
					if(matOp_factorial(datoUno, datoDos, pResFactUno, pResFacDos)==0)
					{
						if(matOp_division(datoUno, datoDos, pResDiv)==0)
						{
							retorno =0;
						}
						else if(matOp_division(datoUno, datoDos, pResDiv)==1)
						{
							retorno =1;
						}
					}
				}
			}
		}
	}

	return retorno;
}


/**
 * \brief Imprime los resultados de las operaciones matematicas
 * \param float resultadoSuma recibe el valor del resultado de la suma
 * \param float resultadoResta recibe el valor del resultado de la resta
 * \param float resultadoDivision recibe el valor del resultado de la division
 * \param float resultadoMultiplicacion recibe el valor del resultado de la multiplicacion
 * \param float resultadoFactorial recibe el valor del resultado del factorial
 * \param int flagErrorDivision informa cuando la division se realizo por cero
 * \return retorna 0 para ok y -1 si no pudo validar argumentos
 */
int opcionCuatro(float resultadoSuma, float resultadoResta, float resultadoDivision,float resultadoMultiplicacion,
		                          float resultadoFactorialUno, float resultadoFactorialDos, int flagErrorDivision)
{
	int retorno =0;

	printf("\nEl resultado de A+B es: %.2f",resultadoSuma);
	printf("\nEl resultado de A-B es: %.2f",resultadoResta);
	if(flagErrorDivision ==1)
	{
		printf("\nNo es posible dividir por cero");
	}
	else
	{
		printf("\nEl resultado de A/B es: %.2f",resultadoDivision);
	}
	printf("\nEl resultado de A*B es: %.2f", resultadoMultiplicacion);
	printf("\nEl factorial de A es: %.2f y El factorial de B es: %.2f\n",resultadoFactorialUno, resultadoFactorialDos);



	return retorno;
}
















