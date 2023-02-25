#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int w;

	for (w = 0; w <= 9; w++)
	{
		if ((w == 2) || (w == 4))
			continue;
		else
			_putchar(w + '0');
	}
	_putchar('\n');
}
