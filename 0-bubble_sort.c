#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size){
  size_t i;
  int tmp;
  if (array == NULL || size < 2)
		return;
  
  for (i = 0; i < size - 1; i++){
    if (array[i] > array[i + 1]){
      tmp = array[i];
      array[i] = array[i + 1];
      array[i + 1] = tmp;
      print_array(array, size);
    }
  }
}
