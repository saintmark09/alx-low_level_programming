#define "main.h"

/**
 * main - Function that print a string
 * @s: _puts_recursion
 * Return: Always (0)
 */

void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
