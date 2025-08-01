#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function that runs the program
 *
 * This program prints the last digit of a randomly generated number
 * and tells whether it is greater than 5, equal to 0, or less than 6 and not 0.
 *
 * Return: 0 if the program ends successfully
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("El último dígito de %d es %d ", n, last_digit);

	if (last_digit > 5)
	{
		printf("y es mayor que 5\n");
	}
	else if (last_digit == 0)
	{
		printf("y es 0\n");
	}
	else
	{
		printf("y es menor que 6 y distinto de 0\n");
	}

	return (0);
}
