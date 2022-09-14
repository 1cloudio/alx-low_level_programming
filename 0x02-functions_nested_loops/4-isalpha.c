#include "main.h"

/**
 * _isalpha - function check if c is a letter, lowercase or uppercase
 *  @c: is an Ascii character
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
