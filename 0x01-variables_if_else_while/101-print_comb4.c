#include <stdio.h>

/**
 * main - the main function
 *
 * Return: the return statement
 */

int main(void)
{
	int k;
	int l;
	int m;

	for (k = 0 ; k < 10 ; k++)
	{
		for (l = 1 ; l < 10 ; l++)
		{
			for (m = 2 ; m < 10 ; m++)
			{
				if (k < l && l < m)
				{
					putchar(k + '0');
					putchar(l + '0');
					putchar(m + '0');
					if (k + l + m != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
