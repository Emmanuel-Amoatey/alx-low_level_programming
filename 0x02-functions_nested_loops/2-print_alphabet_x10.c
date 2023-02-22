#include "main.h"

/**
 * print_alphabet_x10 - this prints alphabets x10
 *
 * Return: always returns 0
 */
void print_alphabet_x10(void)
{
	char x;
	char z;

	for (x = 1 ; x <= 10 ; x++)
	{
		for (z = 'a' ; z <= 'z' ; z++)
			_putchar(z);
		_putchar('\n');
	}
}
