#include <ctype.h>
#include "main.h"

/**
 *_isalpha - checks is c is alpha or not
 *@c: character to check
 *Return: (1) if c is alpha and (0) otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
