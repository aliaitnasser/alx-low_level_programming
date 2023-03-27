#include "main.h"

/**
 *_strlen - calculate the lenght of a string
 *@s: pointer parameter
 *Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 *puts2 - prints every other character of a string
 *@str: pointer parameter of a string
 */

void puts2(char *str)
{
	int  i;

	for (i = 0; str[i] != '\n' && i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
