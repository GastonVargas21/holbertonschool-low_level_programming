#include <stdio.h>

/**
 * main - imprime el alfabeto en minúsculas seguido de un salto de línea
 *
 * Return: 0 si el programa termina correctamente
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
