/**
 * _islower - Verifica si un carácter es minúscula
 * @c: el carácter a verificar
 *
 * Return: 1 si c es una letra minúscula, 0 en caso contrario
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
