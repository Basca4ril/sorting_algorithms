#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j, k;
    int temp;
    int swapped;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                /* Swap elements */
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                /* Set flag to indicate a swap occurred */
                swapped = 1;
		
                /* Print the array after swapping two elements */
                for (k = 0; k < size - 1; k++)
                    printf("%d, ", array[k]);
                printf("%d\n", array[size - 1]);
            }
        }

        /* If no swaps occurred, the array is already sorted */
        if (swapped == 0)
            break;
    }
}

