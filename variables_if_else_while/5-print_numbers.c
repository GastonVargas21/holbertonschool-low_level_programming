#include <stdio.h>

/**
 * main - imprime los números del 0 al 9 seguidos, luego salto de línea
 *
 * Return: 0 si termina correctamente
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
