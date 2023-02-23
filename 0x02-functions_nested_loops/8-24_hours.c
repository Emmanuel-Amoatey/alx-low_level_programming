#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * hr: hour parameter
 *
 * m: minute parameter
 *
 * Return: returns 0 when success
 */

void jack_bauer(void)
{
	int hr, m;

	for (hr = 0 ; hr < 24 ; hr++)
	{
		for (m = 0 ; m < 60 ; m++)

		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
