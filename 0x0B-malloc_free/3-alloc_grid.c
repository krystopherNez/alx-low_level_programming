#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @w: The width of the 2-dimensional array.
 * @h: The height of the 2-dimensional array.
 *
 * Return: If w <= 0, h <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int w, int h)
{
	int **twoDim;
	int hgt_i, wid_i;

	if (w <= 0 || h <= 0)
		return (NULL);

	twoDim = malloc(sizeof(int *) * h);

	if (twoDim == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < h; hgt_i++)
	{
		twoDim[hgt_i] = malloc(sizeof(int) * w);

		if (twoDim[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(twoDim[hgt_i]);

			free(twoDim);
			return (NULL);
		}
	}

	for (hgt_i = 0; hgt_i < h; hgt_i++)
	{
		for (wid_i = 0; wid_i < w; wid_i++)
			twoDim[hgt_i][wid_i] = 0;
	}

	return (twoDim);
}
