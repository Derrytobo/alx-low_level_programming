#include <stdio.h>

/**
 * main - Enry point
 *
 * Return: Always o (success)
 */

int main(void)
{
	char charType;
	int intType;
	long longintType;
	long long alonglongType;
	float afloatType;

	printf("size of a char: %d bytes\n", sizeof(charType) );
	printf("size of an int: %d bytes\n", sizeof(intType) );
	printf("size of a long int: %d bytes\n", sizeof(longintType) );
	printf("size of a long long int: %d bytes\n", sizeof(alonglongType) );
	printf("size of a float: %d bytes\n", sizeof(afloatType) );
	return (0);
}
