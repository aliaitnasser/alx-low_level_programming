#include <stdio.h>

/**
 *main - print lowercase a - z
 *Return: ALways 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
