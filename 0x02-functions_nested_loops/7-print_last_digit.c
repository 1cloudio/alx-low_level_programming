#include "main.h"

/**
 * print_last_digit - is a gotten from the modulu of the variable
 *  @n: is an integer value
 *  Return: 0
 */

int print_last_digit(int n)
{
	int c = n % 10;

	if (n < 0)
		c = c * -1;

	_putchar(c = '0');
return (c);

}
