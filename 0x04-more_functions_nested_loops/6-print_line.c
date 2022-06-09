#include "main.h"

/**
 * print_line-a function that draws a straight line in the terminal.
 * @n:is the number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;

		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
