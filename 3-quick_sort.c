#include "sort.h"

/**
 * lomuto - implements lomuto partition scheme for quick sort
 * @array: array
 * @low: start
 * @high: end
 * @size: size
 *
 * Return: partition index
 */
int lomuto(int *array, int low, int high, size_t size)
{
	int pvt, tmp, i, j;

	pvt = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pvt)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;

			print_array(array, size);
		}
	}

	tmp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = tmp;

	print_array(array, size);

	return (i + 1);
}

/**
 * quick_sorter - helper function for quick sort function
 * @array: array
 * @low: start
 * @high: end
 * @size: size of array
 */
void quick_sorter(int *array, int low, int high, size_t size)
{
	int idx;

	if (low < high)
	{
		idx = lomuto(array, low, high, size);
		quick_sorter(array, low, idx -1, size);
		quick_sorter(array, idx + 1, high, size);
	}
}

/**
 * quick_sort - sorts an arrray using quick sort algorithm
 * @array: integer array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sorter(array, 0, size - 1, size);
}
