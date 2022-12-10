#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the string last digit of, followed by
 * n, followed by
 * the string is, followed by
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
