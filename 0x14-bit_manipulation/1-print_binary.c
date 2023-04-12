#include "main.h"

/**
 * _pow - function that calculates (base ^ power)
 * @base: the base of the exponent
 * @power: the power of the exponent
 *
 * Return: returns value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int alp;
	unsigned int h;

	alp = 1;
	for (h = 1; h <= power; h++)
		alp *= base;
	return (alp);
}

/**
 * print_binary - funtion that prints a number in binary notation
 * @n:  number to print
 *
 * Return: retuns void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char setp;

	setp = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			setp = 1;
			_putchar('1');
		}
		else if (setp == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
