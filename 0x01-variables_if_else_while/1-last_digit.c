#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function will assign a random variable to n
 * each time it is executed or return void.
 *
 * printf - will print string along variables i and n
 *
 * return - value of i will be printed and return 0 otherwise
 */
int main(void)
{
	int n;
	int i;

	i = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	if ((6 > i) != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	return (0);

}
