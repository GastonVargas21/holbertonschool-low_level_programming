#include <stdio.h>

/**
 * main - imprime el alfabeto en minúsculas excepto 'q' y 'e'
 *
 * Return: 0 si termina correctamente
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');

	return (0);
}
