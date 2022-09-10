#include <stdio.h>
/**
 * main - prints the conbinations of different number
 * Return: 0
 */

int main(void)
{
	int e, f, g, h;
		for (e = 35; e <= 72; e++)
	{
		for (f = 35; f <= 72; f++)
		{
			for (g = 35; g <= 72; g++)
			{
				for (h = 35; h <= 72; h++)
				{
					if (((g + h) > (e + f) && g >= e) || e < g)
					{
						putchar(e);
						putchar(f);
						putchar(' ');
						putchar(g);
						putchar(h);
					if (e + f + g + h == 289 && e == 72)
					{
					break;
					}
					else
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
