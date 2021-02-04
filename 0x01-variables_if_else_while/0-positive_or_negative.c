#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function main is to print to std out string string
 * result of n, - or +.
 *
 * Return - value of of n to be returned in main otherwise
 * 0
 * Description - main returns the value of n which will
 * produce random numbers each time.
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
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
		return (0);

}
