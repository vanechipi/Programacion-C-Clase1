#include <stdio.h>
#include "utils.h"
#include <assert.h>

static int test1(void);
static int test2(void);
static int test3(void);

void main(void)
{
	char cadena[21] = "Esto es una cadena\n";
	int result;
	char letracambiar = 'o';
	char letra = 'a';

	test1();
	test2();
	test3();

	printf("1.5.La cadena original es: %s", cadena);
	result = cambia_letras(cadena, letra, letracambiar);
	assert(result == 1);
        printf("1.5.La nueva cadena es: %s", cadena);
}

static int test1(void)
{
	char cadena1[21] = "Esto es una cadena\n";
	char cadena2[21] = "Esto es una cadena\n";
	char letra = 'a';
	int result;

	result = cuenta_numero_letras(cadena1, letra);
	assert(result == 3);
	printf("1.1.La letra '%c' se repite %d veces\n", letra, result);

        result = compara_cadena(cadena1, cadena2);
        assert(result == 1);
        printf("1.2.Las cadenas son iguales\n");

        result = tipo_de_letra(letra);
        assert(result == 1);

	return 0;
}

static int test2(void)
{
	int result;
	char cadena[21] = "Esto es una cadena\n";
	char letra = 'a';
	int n = 4;
	int m = 2;

	result = primera_letra(cadena, letra);
        assert(result == 10);
        printf("1.4.La posicion de la letra '%c' en la cadena es: %d\n", 
        letra, result);

	result = suma_numeros(n, m);
	printf("1.6.La suma de los numeros %d y %d es: %d\n", n, m, result);

	return 0;
}

static int test3(void)
{
	int result;
	int n = 8;
	int m = 6;

	result = resta_numeros(n, m);
	assert(result == 2);
	printf("1.7.La resta de %d menos %d, es: %d\n", n, m, result);
	result = multiplican_numeros(n ,m);
	assert(result == 48);
	printf("1.8.La multiplicacion de %d y %d, es: %d\n", n, m, result);
	return 0;
}
