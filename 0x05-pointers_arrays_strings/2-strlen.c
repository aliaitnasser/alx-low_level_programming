#include "main.h"

/**
 *_strlen - calculate the length of the pointer string parameter
 *@s: string pointer parameter
 *Return: length of the string pointer
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
