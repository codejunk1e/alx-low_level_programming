#include "holberton.h"

/**
 * _memset - fills memory with a constant byte .
 * @s: allocated memory - array of characters .
 * @b: char bytes .
 * @n: number of spaces to fill .
 *
 * Return: pointer to memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
