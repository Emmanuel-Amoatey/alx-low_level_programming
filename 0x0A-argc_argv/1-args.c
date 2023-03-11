#include <stdio.h>
#include "main.h"
/**
 * main - the main function of the program
 * @argc: prints the number of arguments passed
 * @argv: array of the argument
 *
 * Return: returns 0 if success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
