#include "main.h"

/**
 * _isalpha - Checks for an alphabetic character (A-Z or a-z)
 * @c: The character to check (represented as an int)
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
