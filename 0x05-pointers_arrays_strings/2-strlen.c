#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: Entry point
 * Return: Always 0
 */

int _strlen(char *s)
{
	int n = 0;

	for (; *s++;)
		n++;
	return (n);
}
