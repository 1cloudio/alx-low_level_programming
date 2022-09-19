#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string
 * @s: string
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');

}
