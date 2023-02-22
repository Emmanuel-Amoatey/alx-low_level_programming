#include "main.h"

/**
 * print_sign - print a sign
 *
 * @n: parameter of code
 *
 * Return: returns a digit or sign on code outcome
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}


}
