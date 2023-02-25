#include "main.h"

/**
 * print_numbers - function that prints the numbers 0 - 9
 *
 * Return: return a number on code success
 */

void print_numbers(void)
{
	int r;

	for (r = 0 ; r <= 9 ; r++)
	{
		_putchar(r + '0');
	}
	_putchar('\n');
}
