#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
        int i;
	int j;
	
	i = 0;
	while (dest[i])
	   i++;

	dest[i] = ' '; 
	j = 0;
	while (src[j])
	{
	   dest[i] = src[j];
	   i++;
	   j++;
	}
	dest[i] = '\0';

	return (dest);
}
