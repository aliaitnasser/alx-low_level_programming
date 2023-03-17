#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	char n, c;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
