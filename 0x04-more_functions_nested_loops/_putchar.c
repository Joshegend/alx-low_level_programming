#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: parameter 
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
