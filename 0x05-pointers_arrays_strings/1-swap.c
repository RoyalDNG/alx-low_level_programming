#include "main.h"
/**
 * swap_int - exchanges the values pointed at by to pointers
 * @a: is the first one
 * @b: is the second
 */
void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
