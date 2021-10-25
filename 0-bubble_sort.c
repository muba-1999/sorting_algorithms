#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array to be sorted
 * @size: the size of the
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			tmp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = tmp;
		}
	}
}
