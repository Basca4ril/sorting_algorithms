#include "sort.h"
/**
 * bubble_sort - sorts an array of integers using bubble sort
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int tmp, swp;
	
	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swp = 0;
		
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swp = 1;
				for (k = 0; k < size - 1; k++)
					printf("%d, ", array[k]);
				printf("%d\n", array[size - 1]);
			}
		}
		if (swp == 0)
			break;
	}
}

