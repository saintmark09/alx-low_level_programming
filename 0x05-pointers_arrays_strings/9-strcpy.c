#include "main.h"

/**
 * _strcpy -Function that copies the string pointed to by src
 * @dest: First
 * @src: Second
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*(src + n) != '\0')
	{
		*(dest + n) = *(src + n);
		n++;
	}

	*(dest + n) = '\0';
	return (dest);
}
