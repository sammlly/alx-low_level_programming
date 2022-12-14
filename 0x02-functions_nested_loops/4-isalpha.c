#include "main.h"

/**
 * _isalpha - entry point.
 * @c: a letter to be checked.
 * Return: checks for lower and upper letter and return 0 if both conditions are not satisfied.
 */

int _isalpha(int c)
{
	if((97 >= c) && (c <= 122))
		return (1);
	else if((65 >= c) && (90 <= c))
		return (1);
	else
		return (0);
}
