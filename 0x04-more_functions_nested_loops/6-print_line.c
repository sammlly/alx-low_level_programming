#include "main.h"

/**
 * print_line - prints line
 * @n: number of times the character _ printed
 */

void print_line(int n)
{
	int i = 1;

	while (i <=  n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}