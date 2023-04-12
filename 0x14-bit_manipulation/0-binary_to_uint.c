#include "main.h"

/**
 * binary_to_uint - funtion that converts a binary number to an unsigned int.
 * @b: a pointer to a string containing a binary number
 *
 * Return: returns unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int alt;

	alt = 0;
	if (!b)
		return (0);
	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);
	}
	for (d = 0; b[d] != '\0'; d++)
	{
		alt <<= 1;
		if (b[d] == '1')
			alt += 1;
	}
	return (alt);
}
