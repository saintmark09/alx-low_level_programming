#include "main.h"

/**
 * print_alphabet -  Write a function that prints the alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);

	_putchar('\n');
	return (0);
}

