#include <stdio.h>

/**
 * main - imprime el alfabeto en minúsculas en orden inverso
 *
 * Return: 0 si termina bien
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
