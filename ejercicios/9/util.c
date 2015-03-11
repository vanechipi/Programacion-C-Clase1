#include <stdio.h>
#include <string.h>

int cuenta_numero_letras(char cadena[], char letra)
{
	int contador = 0;
	int i;

	for (i = 0; cadena[i] != '\0'; i++)
	{
		if (cadena[i] == letra)
			contador ++;
	}
	return contador;
}

int compara_cadena(char *cadena1, char *cadena2)
{
	if (strcmp(cadena1, cadena2) == 0)
		return 1;

	return 0;
}

int tipo_de_letra (char letra)
{
	switch (letra) {
	case 'A':
	case 'a':
		printf("1.3.Encontrada letra 'a'\n");
		return 1;
		break;
	case 'C':
	case 'c':
		printf("1.3.Encontrada letra 'c'\n");
		return 2;
		break;
	case 'E':
	case 'e':
		printf("1.3.Encontrada letra 'e'\n");
		return 3;
		break;
	default:
		printf("1.3.No es ningun valor esperado\n");
		return 0;
		break;
	}
}

int primera_letra(char cadena[], char letra)
{
	int i;

	for (i = 0; i < strlen(cadena); i++)
	{
		if (cadena[i] != letra) continue;
		return i;
	}
}

int cambia_letras(char cadena[], char letraoriginal, char letracambiar)
{
	int i;

	for (i = 0; i < strlen(cadena); i++)
	{
		if (cadena[i] != letraoriginal) continue;
		cadena[i] = letracambiar;

	}
	return 1;
}

int suma_numeros(int n, int m)
{
	return n + m;
}

int resta_numeros(int n, int m)
{
	return n - m;
}

int multiplican_numeros(int n, int m)
{
	return n * m;
}
