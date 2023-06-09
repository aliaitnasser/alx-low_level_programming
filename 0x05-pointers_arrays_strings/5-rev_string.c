#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: lenght
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
 * rev_string - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void rev_string(char *s)
{

	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
