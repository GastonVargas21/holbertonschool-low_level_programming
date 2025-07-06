#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* Imprimir alfabeto en minúsculas */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	/* Imprimir alfabeto en mayúsculas */
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	/* Imprimir salto de línea */
	putchar('\n');

	return (0);
}
