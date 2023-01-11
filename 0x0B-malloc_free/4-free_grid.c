#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be freed.
 * @h: The height of grid.
 */
void free_grid(int **grid, int h)
{
	int i;

	for (i = 0; i < h; i++)
		free(grid[i]);

	free(grid);
}
