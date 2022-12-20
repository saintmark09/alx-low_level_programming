#include "main.h"

/**
 * print_rev - Function that prints a string in reverse followed by a new line
 * @s: Entry point
 * Return: Always 0
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	for (n = n - 1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
