#include "main.h"

/**
 * print_alphabet_x10 - write a function that prints 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int tens;
	char lower;

	for (tens = 0; tens <= 9; tens++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
			_putchar(lower);
		_putchar('\n');
	}
}
