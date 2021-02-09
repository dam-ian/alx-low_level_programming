#include <stdio.h>
#include "holberton.h"

/**
 * main -Entry point for function to print the alphabet
 * 10 times
 *
 * putchar - print variables c and n
 */

int main(void)
{
	int n= '\n'

	for(i = 0; i < 10; i++)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar(n);
	}

	return(0);
}
