#include "main.h"

/**
 * print_sign - entry point.
 * @n: represents a number.
 * Return: returns 1, 0, -1 for different n values.
 */

int print_sign(int n)
{
	int test;
	
	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
return (test);
}
