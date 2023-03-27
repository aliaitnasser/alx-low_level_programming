#include "main.h"

/**
 *swap_int - takes 2 pointers parameters and swip them
 *@a: first int pointer parameter
 *@b: second int pointer parameter
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
