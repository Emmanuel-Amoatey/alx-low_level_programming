#include "main.h"
/**
 * times_table -  a function that prints the 9 times table
 * v = row, c = column, d = digits of result
 * Return: times table
 */

void times_table(void)
{
	int v, c, d;

	for (v = 0; v <= 9; v++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = (v * c);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
