#include "main"

/**
 * _isalpha - Write a function that checks for alphabetic character
 * @c: checked character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if not
 */

int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
