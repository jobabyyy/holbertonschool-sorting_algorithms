#include "sort.h"

/**
 * swap - swaps two variables
 * @n1: first to swap
 * @n2: second to swap
 */
void swap(int *n1, int *n2)
{
	int tmp = *n1;

	*n1 = *n2;
	*n2 = tmp;
}

/**
 * bubble_sort - Write a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array of integers
 * @size: number of integers in array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
