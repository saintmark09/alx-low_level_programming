#include <stdio.h>

/**
* main - Program that prints the alphabet in lowercase, followed by a new line
*
* Return: Always 0 (Success)
*/

int main(void)
{

	char letter;

	for (letter = "a"; letter <= "z"; letter++)

		putchar(letter);

	putchar("\n");

	return (0);
}
