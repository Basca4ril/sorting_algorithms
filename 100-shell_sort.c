#include "sort.h"

/**
 * shell_sort - sorts arrays using shell sort
 * @array: array
 * @size:size
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gp = 1;
	int tmp;

	if (array == NULL || size < 2)
		return;
	while (gp < size / 3)
		gp = gp * 3 + 1;
	while (gp > 0)
	{
		for (i = gp; i < size; i++)
		{
			tmp = array[i];

			for (j = i; j >= gp && array[j - gp] > tmp; j -= gp)
			{
				array[j] = array[j - gp];
			}

			array[j] = tmp;
		}
		print_array(array, size);
		gp /= 3;
	}
}
