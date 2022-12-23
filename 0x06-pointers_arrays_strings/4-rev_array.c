#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: First entry
 * @n: second entry
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		n--;
		b = ar[a];
		ar[a] = ar[n];
		ar[n] = b;
	}
}
