#include "main.h"

/**
 * _puts - Function that prints a string, followed by a new line, to stdout
 * @str: Entry point
 * Return: Always 0
 */

void _puts(char *str)
{
	int n = 0;

	for (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
