#include "main.h"

/**
 * print_last_digit - this is our main fucntion
 *
 * @a: parameter of code
 *
 * Return: returns the last digit
 */

int print_last_digit(int a)
{
	int last_digit = a % 10;

	if (a < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');
	return (last_digit);
}
