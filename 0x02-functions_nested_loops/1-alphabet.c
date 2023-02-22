#include "main.h"

/**
 * print_alphabet - the main funtion used
 * _putchar: outputs results of code
 * Return: always returns 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}
