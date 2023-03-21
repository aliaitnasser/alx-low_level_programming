#include "main.h"

/**
 *jack_bauer - print hours and minuts of the day
 *
 *Return: void
 *
 */

void jack_bauer(void)
{
	int minuts = 0;
	int hours = 0;

	while (hours < 24)
	{
		while (minuts < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (minuts / 10));
			_putchar('0' + (minuts % 10));
			_putchar('\n');
			minuts++;
		}
		minuts = 0;
		hours++;
	}
}
