#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - this is the main function
 *
 * Return: returns 0 when success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
