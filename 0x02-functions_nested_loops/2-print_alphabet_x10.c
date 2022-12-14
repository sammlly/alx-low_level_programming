#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always return 0 (Success)
 */

void print_alphabet_x10(void)
{
	char i = 'a', j;

	for(j = 0;j <= 10;j++)
	{
		while(i < 'z')
		{
		_putchar(i);
		}
	i++;
	}
_putchar('\n');
}
