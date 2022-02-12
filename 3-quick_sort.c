#include "sort.h"

void swap(int *xp, int *yp, int *array, size_t size)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	if (*xp != *yp)
		print_array(array, size);
}

/**
 * partition - Selection Sort Algorithm
 * @array: Array to be sorted
 * @size: Size of the Array
 * Return: Void
 */

int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1), j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j], arr, size);
		}
	}
	swap(&arr[i + 1], &arr[high], arr, size);
	return (i + 1);
}

void quicksort(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);
		quicksort(arr, low, pi - 1, size);
		quicksort(arr, pi + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
