#include "main.h"

/**
 * _abs - main funtion of code
 *
 * @a: parameter of code
 *
 * Return: our return function
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
