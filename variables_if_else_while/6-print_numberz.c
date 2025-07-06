#include <stdio.h>

/**
 * main - imprime los números del 0 al 9 sin usar variables char,
 * usando solo dos llamadas a putchar.
 *
 * Return: 0 si termina correctamente
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
