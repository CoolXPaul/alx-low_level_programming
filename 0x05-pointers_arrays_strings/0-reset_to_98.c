#include "main.h"
/**
 * _putchar - writes the character to stdout
 *
 * @n: character to print
 *
 * Return: Always 0 (Success)
 */
void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int n;
	n = 402;
	_putchar(n);

	reset_to_98(&n);
	_putchar(n);
	return (0);
}
