/* Creando una variable local de nombre "valor". Comprobar si dicha variable
 * es 0, si es así imprimir un mensaje diciendo que se ha recibido un 0 o un 1.
 * En los demas casos imprimir un mensaje diciendo que no es un valor esperado.
 */

/* Bibliotecas a incluir */

#include <stdio.h>

int main(int argc, char* argv[])
{
	/* Declaración de variables */
	int valor = 0;

        if (argc != 2)
	{
                fprintf(stderr, "ERROR:\n%s <numero>\n", argv[0]);
                return -1;
        } else
                valor = atoi(argv[1]);

	/* Código usando condicional switch */
	switch (valor)
	{
	case 0:
	case 1:
		printf("Se ha recibido un 0 o un 1\n");
		break;
	default:
		printf("No es un valor esperado\n");
		break;
	}
	return 0;
}
