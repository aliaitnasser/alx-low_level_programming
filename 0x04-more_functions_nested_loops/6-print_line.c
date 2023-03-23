#include "main.h"

/**
 *print_line - draws a straight line in the terminal
 *@n: number of character to draw
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');

	_putchar('\n');
}
