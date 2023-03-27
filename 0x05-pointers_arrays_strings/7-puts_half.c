#include "main.h"

/**
 *_strlen - calculate the length of a string
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
 *puts_half - prints half od the string
 *@str: pointer parameter
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = (len / 2);

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}




