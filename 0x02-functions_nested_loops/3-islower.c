#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 * @c: character
 * Return: 1 if c is lowercase, return 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
