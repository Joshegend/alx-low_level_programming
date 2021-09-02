#include "main.h"
#include <stdio.h>

/**
 * -isupper.c - function that checks for uppercase character
 *  @c: parameter
 *  Return: 1 if c is uppercase or otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}


