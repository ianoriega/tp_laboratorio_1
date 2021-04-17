#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"
#include "opciones.h"
#include "menu.h"

int main(void)
{
	int opcionIngresada;
	int finalizarPrograma;
	float primerOperando;
	float segundoOperando;
	float resSuma;
	float resResta;
	float resDivision;
	float resMultiplicacion;
	float resFactorialUno;
	float resFactorialDos;
	int flagDivision;
	int flagOpcion1;
	int flagOpcion2;
	int flagOpcion3;

	printf("Bienvenido");

	do{
		finalizarPrograma =1;

		menu(flagOpcion1, flagOpcion2, primerOperando, segundoOperando);

		utn_getNumero(&opcionIngresada, 10, "\nIngrese la opcion elegida: ",
				                            "\nOpcion Incorrecta: reintente", 1, 5, 2);
		switch(opcionIngresada)
		{
			case 1:
				opcionUno(&primerOperando);
				flagOpcion1 = 0;
				break;

			case 2:
				opcionDos(&segundoOperando);
				flagOpcion2 = 0;
				break;

			case 3:
				if(!flagOpcion1 && !flagOpcion2)
				{
					flagOpcion3 =0;
					if(opcionTres(primerOperando, segundoOperando, &resSuma, &resResta, &resDivision,&resMultiplicacion,
																				 &resFactorialUno, &resFactorialDos)==1)
					{
						flagDivision =1;
					}
				}
				else
				{	printf("\n---------------------------------------------");
					printf("\nERROR Primero debe cargar los operandos A y B");
					printf("\n---------------------------------------------");
				}
				break;

			case 4:
				if(!flagOpcion3)
				{
					opcionCuatro(resSuma, resResta, resDivision, resMultiplicacion, resFactorialUno, resFactorialDos,
						                                                                           flagDivision);
				}
				else
				{
					printf("\n---------------------------------------------");
					printf("\nERROR: Primero debe calcular las operaciones");
					printf("\n---------------------------------------------");
				}
				break;

			case 5:
				finalizarPrograma = 0;
				break;
		}

	}while(finalizarPrograma);

	printf("\nGracias!");




	return EXIT_SUCCESS;
}
