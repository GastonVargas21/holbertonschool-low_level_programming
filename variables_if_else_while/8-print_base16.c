#include <stdio.h>

/**
 * main - imprime los números hexadecimales en minúsculas
 *
 * Return: 0 si termina correctamente
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar(i - 10 + 'a');
	}

	putchar('\n');

	return (0);
}
