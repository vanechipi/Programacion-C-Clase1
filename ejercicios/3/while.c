/* Creando una variable local de nombre "len". Crear una variable local de
 * tipo cadena de caracteres que se llame "cadena". Aumentar el valor de "len"
 * mientras que no se encuentre el caracter '\0' en la posicion cadena[i].
 */

/* Bibliotecas a incluir */

#include <stdio.h>

void main()
{
	/* Declaración de variables */
	int len=0;
	char cadena[7] = "cadena";

	/* Código usando while*/
	while (cadena[len] != '\0')
	{
		len++;
	}
	printf("Encontrado el \\0 de la cadena y el tamaño es: %d\n",len);
}
