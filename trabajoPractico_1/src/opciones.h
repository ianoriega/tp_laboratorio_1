/*
 * opciones.h
 *
 *  Created on: 15 abr. 2021
 *      Author: inoriega
 */

#ifndef OPCIONES_H_
#define OPCIONES_H_
/**
 * \brief Ejecuta opcion 1 de la calculadora
 * \param float puntero a variable que contendra el primer operando
 * \return retorna 0 para ok y -1 si no pudo validar argumentos
 */

int opcionUno(float* pPrimerOperando);

/**
 * \brief Ejecuta opcion 2 de la calculadora
 * \param float puntero a variable que contendra segundo operando
 * \return retorna 0 para ok y -1 si no pudo validar argumentos
 */
int opcionDos(float* pSegundoOperando);

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
		                                                                 float* pResFactUno, float* pResFacDos);

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
		                          float resultadoFactorialUno, float resultadoFactorialDos, int flagErrorDivision);

#endif /* OPCIONES_H_ */
