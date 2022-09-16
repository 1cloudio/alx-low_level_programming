#include <stdio.h>
#include "main.h"

/**
 * print number - print a number
 * @n: number to be printed
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
