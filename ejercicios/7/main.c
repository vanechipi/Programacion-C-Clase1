/* En el programa main, dado un numero 'n' con el valor que nosotros queramos
 * definir. Comprobar si ese numero es par usando la funcion definida en
 * utils.
 * Si ese numero es par, debemos multiplicarlo por otro numero secreto que
 * nosotros definimos. Para ello debemos realizar una función de tipo estática
 * llamada multiplicar_numero_secreto donde el argumento de entrada sea el
 * numero 'n'.
 *
 * Devolver la multiplicacion del numero 'n' con el numero secreto en caso de
 * que 'n' sea par. Si no devolver -1.
 */

/* Zona para incluir las bibliotecas o las cabeceras */

#include <stdio.h>
#include "utils.h"

/* Zona para declarar la funcion estática */

static int multiplicar_numero_secreto(int n);
int numSecreto = 4;

/* Programa Principal */

int main (int argc, char* argv[])
{
        /* Declaración de variables */
        int valor;
	int resultado;

        if (argc != 2)
	{
                fprintf(stderr, "ERROR:\n%s <numero>\n", argv[0]);
                return -1;
        } else
                valor = atoi(argv[1]);
		if (es_par(valor))
		{
			resultado = multiplicar_numero_secreto(valor);
			printf("El valor de multiplicarlo por el numero secreto"
			" %d es: %d\n", numSecreto, resultado);
		}
	return -1;
}
static int multiplicar_numero_secreto(int n)
{
	return n * numSecreto;
}

