#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: First entry
 * @src: Second entry
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
