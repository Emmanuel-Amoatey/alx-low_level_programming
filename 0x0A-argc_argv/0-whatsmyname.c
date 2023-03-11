#include <stdio.h>
#include "main.h"

/**
 * main - the main of the program
 * @argc: the number of arguments
 * @argv: the array of the argument
 *
 * Return: returns 0 if success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
