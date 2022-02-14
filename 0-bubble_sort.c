#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 *               ascending order using the Bubble sort algorithm
 * @array: The array
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t temp = 0, len = size;

	for (i = 1; i < len; i++)
	{
		for (j = 0; j < len - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, len);
			}
		}
	}
}
