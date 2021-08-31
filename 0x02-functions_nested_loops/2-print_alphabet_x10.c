#include "main.h"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int u;

	for (u = 0; u <= 10; u++)
	{
        for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	c++;
	}
}
