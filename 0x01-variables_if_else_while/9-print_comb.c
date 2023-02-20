#include <stdio.h>

/**
 * main - the main function
 *
 * Return: this returns 0
 */

int main(void)
{
	int m;

	for (m = 0 ; m < 10 ; m++)
	{
		putchar(m + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
