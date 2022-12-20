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
 * _partition - Lomuto partition
 * @array: array to sort
 * @l: lowest value
 * @h: highest value
 * @size: size of array
 *
 * Return: pivot
 */
int _partition(int *array, ssize_t l, ssize_t h, size_t size)
{
	int pivot = array[h], tmp = 0, i = l - 1, j = l;

	while (j <= h - 1)
	{
		if (array[j] <= pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (i != j)
				print_array(array, size);
		}
		j++;
	}
	i++;
	tmp = array[i];
	array[i] = array[h];
	array[h] = tmp;
	if (array[i] != array[h])
		print_array(array, size);
	return (i);
}
/**
 * lomuto_sch - Lomuto partition scheme.
 * @array: array to be sorted
 * @l: lowest value
 * @h: highest value, pivot
 * @size: size of array
 */
void lomuto_sch(int *array, int l, int h, size_t size)
{
	int i = 0;

	if (l < h)
	{
		i = _partition(array, l, h, size);
		lomuto_sch(array, l, i - 1, size);
		lomuto_sch(array, i + 1, h, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	lomuto_sch(array, 0, size - 1, size);
}
