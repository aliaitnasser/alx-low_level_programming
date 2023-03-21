#include "main.h"

/**
 *print_sign - print + if n positif, - if n negatif and 0 if n = 0;
 *@n: int to verify
 *Return: 1 if n > 0, -1 if n < 0 and 0 if n =0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
