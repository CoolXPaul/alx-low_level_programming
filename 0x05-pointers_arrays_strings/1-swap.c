#include "main.h"
/**
 * swap_int - Swap the value of two integers
 *
 * @a: character to print
 * @b: character to swap
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
