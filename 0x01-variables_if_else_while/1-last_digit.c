#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digits
 * Return: 0
 */

int main(void)
{
	int n, lastd;

	srand(time(0))
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lasted > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lasted);
	}
	else if (lastd < 6 && lasted != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lasted);
	}
	return (0);
}
