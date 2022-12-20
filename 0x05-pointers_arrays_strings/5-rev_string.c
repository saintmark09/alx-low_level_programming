#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: Entry point
 * Reture: Always 0
 */

void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int n;

	while (s[c] != '\0')
		c++;
	for (n = 0; n < c; n++)
	{
		c--;
		rv = s[n];
		s[n] = s[c];
		s[c] = rv;
	}
}
