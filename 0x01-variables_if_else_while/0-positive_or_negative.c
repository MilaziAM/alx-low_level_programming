#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - betty style doc
 * betty coding style
 * Return: 0 successfull
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	/* your code goes there */
	return (0);
}
