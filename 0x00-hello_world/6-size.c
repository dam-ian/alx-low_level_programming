#include <stdio.h>
/*
 * main -  This function is to print various sizes of data types
 * that are in a computer.
 * 
 * return - return 0 if succesful
 */
int main(void)
{
	char c;
	int i;
	long int il;
	long long int id;
	float f;

	printf("Size of a char: %lu byte(s)\n",sizeof(c));
	printf("Size of an int is: %lu byte(s)\n",sizeof(i)); 
	printf("Size of long int: %lu byte(s)\n",sizeof(il));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(id));
	printf("Size of a float: %lu byte(s)\n",sizeof(f));

	return (0);
}
