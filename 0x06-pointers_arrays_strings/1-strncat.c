#include "main.h"

/**
 *_strncat - concatenates n bytes from string dest to src
 *@dest: the string to concatenate to
 *@src: the string to concatenate from
 *@n: the number of bytes to get from src
 *Return: the final result in dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
