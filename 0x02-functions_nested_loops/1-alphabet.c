#include <stdio.h>
#inlcude "holberton.h"

/**
 * main - Entry point for print function/ prints
 * prints alpahbet
 *
 * print_alphabet - prints alphabet in lower case.
 * returns void.
 *
 * return - main function returns an int of 0
 */
int main(void)
{
	char ch;
	void print_alphabet(void);

	for (ch = 'a' ; ch = 'z' ; ch++ )
	{
		_putchar(ch);
		print_alphabet();
	}
	return (0);
}
