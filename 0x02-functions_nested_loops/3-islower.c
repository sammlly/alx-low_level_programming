#include "main.h"

/**
 * _islower - check the code.
 *@c - is the value representing the ascii.
 * Return: returns 1 if c is lowercase and  0 otherwise.
 */

int _islower(int c)
{
	if (c <= 97 && c <= 122)
		return (1);
	else
		return (0);
}
	
