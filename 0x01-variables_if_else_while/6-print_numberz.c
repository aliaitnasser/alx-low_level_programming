#include <stdio.h>

/**
 * main - print 0123456789
 * Return: Always 0
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
