#include "main.h"

/**
 * print_array - Function that prints n element of an array of integers
 * @a: First
 * @n: Second
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
			printf(", ");
	}
	printf("\n");
}
