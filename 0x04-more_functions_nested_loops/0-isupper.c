#include "holberton.h"

/**
 * _isupper - checks if input is an uppercase letter in ASCII
 * @c: integer to check
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
