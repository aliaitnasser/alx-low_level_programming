#include "main.h"

/**
 *_isupper - check if  the parameter is uppercase or not
 *@c: charachter to be checked
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
