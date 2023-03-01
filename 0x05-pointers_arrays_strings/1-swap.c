#include "main.h"

/**
 * swap_int - the main funtion of our code
 *
 *@a: function parameter
 *
 *@b: funtion parameter
 *
 *Return: retuns a digit on code duccess
 */

void swap_int(int *a, int *b)
{
	int aux;
	
	aux = *a;

	*a = *b;

	*b = aux;
}
