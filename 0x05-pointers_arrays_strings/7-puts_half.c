#include "main.h"

/**
 * puts_half - Function that prints half of a string
 * @str: Entry point
 * Return: Always 0
 */

void puts_half(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n++;
		str++;
	}

	str -= (n / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
