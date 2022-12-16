#include "main.h"

/**
 * _abs - function that computes the value of an integer
 * @c:is an integer used for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);

}

