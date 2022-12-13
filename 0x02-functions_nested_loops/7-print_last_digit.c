#include "main.h"

/**
 * print_last_digit - function to prints the last digit
 * @j: the number
 * Return: value of the last digit
 */
int print_last_digit(int j)
{
	int ld = j % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
