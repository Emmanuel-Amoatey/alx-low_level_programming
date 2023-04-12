#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int l;

	l = 1024;
	set_bit(&l, 5);
	printf("%lu\n", l);
	l = 0;
	set_bit(&l, 10);
	printf("%lu\n", l);
	l = 98;
	set_bit(&l, 0);
	printf("%lu\n", l);
	return (0);
}
