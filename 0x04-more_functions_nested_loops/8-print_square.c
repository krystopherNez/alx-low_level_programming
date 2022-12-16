#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @n: The size of the square.
 */
void print_square(int n)
{
	int s1, s2;

	if (n > 0)
	{
		for (s1 = 0; s1 < n; s1++)
		{
			for (s2 = 0; s2 < n; s2++)
				_putchar('#');

			if (s1 == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
