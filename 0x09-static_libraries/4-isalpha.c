#include "main.h"

/**
 * _isalpha - prints alphabetics
 * @c: parameter of code
 * Return: turns 1 if c is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
