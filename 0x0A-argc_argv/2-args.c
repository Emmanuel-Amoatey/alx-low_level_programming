#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 * @argc: the number of arguments passed
 * @argv: the array of arguments
 *
 * Return: returns 0 on success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
	{
	printf("%s\n", argv[x]);
	}

	return (0);
}
