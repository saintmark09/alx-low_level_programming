#include "main.h"

/**
 * puts2 - Function that prints every other character of string
 * @str: Entry point
 * Return: Always 0
 */

void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
		else
			continue;
	}
	_putchar('\n');
}
