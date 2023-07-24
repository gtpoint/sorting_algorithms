#include "sort.h"

/**
 * _swap - Swap two integers in an array.
 * @a: The first integer.
 * @b: The second integer.
 */
void _swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool cond = true;

	if (array == NULL || size < 2)
		return;

	while (cond == true)
	{
		cond = false;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				_swap(array + i, array + i + 1);
				print_array(array, size);
				cond = true;
			}
		}
		len--;
	}
}
