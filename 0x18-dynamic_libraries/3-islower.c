#include "main.h"

/**
 * _islower - function to check for lower character
 *  @c: is an Ascii character
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
