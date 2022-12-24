#include "main.h"

/**
 * rot13 - Function that encodes a string rot13
 * @str: First entry
 * Return: 0
 */
char *rot13(char *str)
{
	int i;
	int j;
	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str1[j] == *(str + i))
			{
				*(str + i) = str2[j];
				break;
			}
		}
	}
	return (str);
}
