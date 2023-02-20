#include <stdio.h>

/**
 * main - Our main function
 *
 * Return: returns an integer if code success
 */

int main(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
		if (k != 'q' && k != 'e')
			putchar(k);
	putchar('\n');
	return (0);
}
