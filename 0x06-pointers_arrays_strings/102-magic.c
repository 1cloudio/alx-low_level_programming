#include <stdio.h>

/*
 * main - one line to this code, so that the program prints a[2] = 98,
 * Return: 0
 */
int main(void)
{
	int m;
	int z[5];
	int *p;

	z[2] = 1024;
	p = &m;
/*
 *  Remember:
 *  - you are not allowed to use a
 */
	*(p + 5) = 98;
	printf("z[2] =%d\n", z[2]);

	return (0);

}
