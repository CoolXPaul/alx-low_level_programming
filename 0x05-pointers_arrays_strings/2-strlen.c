#include "main.h"

/**
 * _strlen - returns the length of a tsring.
 * @s: input string return
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
