#include "sort.h"

/**
 * selection_sort - sorts array of integers using selection sort algorithm
 * @array: integer array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minidx, k;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		minidx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minidx])
				minidx = j;
		}

		if (minidx != i)
		{
			tmp = array[i];
			array[i] = array[minidx];
			array[minidx] = tmp;
			
			for (k = 0; k < size - 1; k++)
				printf("%d, ", array[k]);
			printf("%d\n", array[size - 1]);
		}
	}
}
