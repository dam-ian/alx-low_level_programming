#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		put("%d is positive", n);
	if (n = 0)
		put("%d is zero", n);
	if (n < 0)
	        put("%d is negative", n);
		     return (0);
}
