#include <stdio.h>
/**
 * main - this function prints the alphabet in order
 * first in lower case and the in upper case.
 *
 * return - value retuned 0
 */
int main(void)
{
	char c;
	if (c == 'a' && c <= 'z')
	{
		putchar (c);
	}
	if (c == 'A' && c <= 'Z')
	{
		putchar (c);
	}
	return (0);
}
