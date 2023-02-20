#include <stdio.h>
/**
 * main - the main function
 *
 * Return: this is the return statement
 */

int main(void)
{
	int l;
	char m;

	for (l = 0 ; l < 10 ; l++)
		putchar(l + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
