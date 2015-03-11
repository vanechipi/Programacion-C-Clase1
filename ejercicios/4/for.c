/* Realizar el ejercicio que hemos realizado con while pero usando
 * el bucle for
 */


/* Bibliotecas a incluir */

#include <stdio.h>

void main()
{
	/* Declaración de variables */
	int len = 0;
	char cadena[8] = "cadenas";

	/* Código usando condicional while */
	for (len = 0; cadena[len] != '\0'; len++);
	printf("Tamaño de la cadena es: %d\n", len);
}
