#include "main.h"

/**
 * _isalpha - entry point.
 * @c: a letter to be checked.
 * Return: checks for letter and return 0 if both conditions are not satisfied.
 */

int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
