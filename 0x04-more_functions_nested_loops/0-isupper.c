#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: function parameter
 *
 * Return: returns a value on code success
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
