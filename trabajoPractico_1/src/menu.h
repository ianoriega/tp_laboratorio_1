/*
 * menu.h
 *
 *  Created on: 17 abr. 2021
 *      Author: inoriega
 */

#ifndef MENU_H_
#define MENU_H_

/**
 * \brief ejecuta el menu de la calculadora
 * \param int flagOpcion1 permite saber si el primer operando fue cargado
 * \param int flagOpcion2 permite saber si el primer segundo fue cargado
 * \float operandoUno recibe el primer operando
 * \float operandoDos recibe el segundo operando
 */
int menu(int flagOpcion1, int flagOpcion2, float operandoUno, float operandoDos);

#endif /* MENU_H_ */
