#include "main.h"

/**
 * _isdigit - checks for a digit from 0 t0 9
 *
 * @c: the function parameter
 *
 * Return: returns a number on success
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	else
		return (0);
}
