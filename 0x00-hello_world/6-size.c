#include <stdio.h>
/**
 * main - the main function
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	int intType;
	float floatType;
	long int long_intType;
	long long int long_long_intType;
	char charType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_intType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long_long_intType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
