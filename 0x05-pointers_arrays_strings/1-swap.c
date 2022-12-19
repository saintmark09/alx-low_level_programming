#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: First
 * @b: Second
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
