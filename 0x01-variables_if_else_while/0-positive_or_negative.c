#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a random number
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d\n is positive", n);
	else if (n < 0)
		printf("%d\n is negative", n);
	else 
		printf("%d\n is zero", n);
	return (0);
}
