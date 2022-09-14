#include <stdio.h>

/**
 * print_to_98 - print natural numbers to 98,
 * followed by a space and separated by coma
 * @n: begin counting from a
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%dn", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%dn", n);

	}
}
