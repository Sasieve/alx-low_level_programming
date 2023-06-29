#include "main.h"
/**
 * swap_int-swaps the values of integers
 * @a:interger to swap
 * @b:interger to swap
 */
void swap_int(int *a, int *b)
{
	int m;
	m = *a;
	*b = *a;
	*b = m;
}
