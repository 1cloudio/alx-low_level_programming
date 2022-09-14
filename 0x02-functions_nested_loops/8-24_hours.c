#include "main.h"

/**
 * jack_bauer - function that prints every min of the day
 * n from 00:00 to 23:59, min loop counts mins while hour loop counts hour
 * and reset min
 * Return: 0
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;
	int hours_remainder;
	int mins_remainder;

	while (hour <= 23)
	{
	while (minute <= 59)
	{
	mins_remainder = minute % 10;
	hours_remainder = hour % 10;
	_putchar(hour / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minute / 10 + '0');
	_putchar(mins_remainder + '0');
	minute++;
	_putchar('\n');
	}
	hour++;
	minutes = 0;
}
}
