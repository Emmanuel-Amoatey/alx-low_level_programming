#include "main.h"

/**
 * _islower - checks code
 * @c: the character of the code
 * Return: returns a number on code outcome
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
