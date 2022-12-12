#include <stdio.h>

/**
 * main - Write a program that prints all possible different combination
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0';
	int b = '0';

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (!((a == b) || (b > a)))
			{
				putchar(a);
				putchar(b);
				if (!(a == '9' && b == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
