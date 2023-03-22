#include "main.h"

/**
 *print_last_digit - prtins the last digits of a number
 *@n: integer argument
 *Return: Always (0)
 */

int print_last_digit(int n)
{
	int a;

	a = 1;

	if (n < 0)
		a *= -1;
	a *= n % 10;
	_putchar(a + 48);
	return (a);
}
