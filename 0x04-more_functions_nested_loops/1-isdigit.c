#include "main.h"
#include <stdio.h>

/**
 * _isdigit - a function that checks for a digit
 * @c: charcter to be tasted
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 99)
	{
		return (1);
	}

	return (0);

}
