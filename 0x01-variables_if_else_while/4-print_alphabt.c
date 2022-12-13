#include <stdio.h>
#include <stdlib.h>

/**
 * main - main returns selected alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch= 'a';
	while (ch <= 'z')
	{		if(ch!= 'e' && ch!= 'q')
		{
			putchar (ch);
		}
	}
	putchar('\n');
	return (0);
}
