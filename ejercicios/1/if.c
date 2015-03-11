/* Creando una variable local de nombre "valor". Comprobar si dicha variable
 * es mayor que 5, si es así imprimir un mensaje usando printf confirmando
 * que es mayor. En caso contrario, escribir un mensaje
 */

/* Bibliotecas a incluir */

#include <stdio.h>

int main(int argc, char* argv[]) {

	/* Declaración de variables */

	int valor;

	if (argc != 2)
	{
		fprintf(stderr, "ERROR:\n%s <numero>\n", argv[0]);
		return -1;
	} else
		valor = atoi(argv[1]);

	/* Código usando condicional if */

	if (valor >= 5)
		printf("Este valor es mayor o igual que 5: %d\n",valor);
	else
		printf("Este valor no es mayor que 5: %d\n",valor);

	return 0;
}
