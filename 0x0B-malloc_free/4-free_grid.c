#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_grid - free a 2 dimensional grid
*@grid: grid of integerss
*@height: height of the grid
*Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
