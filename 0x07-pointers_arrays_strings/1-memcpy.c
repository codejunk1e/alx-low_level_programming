#include "holberton.h"

/**
 * _memset - fills memory with a constant byte .
 * @s: allocated memory - array of characters .
 * @b: char bytes .
 * @n: number of spaces to fill .
 *
 * Return: pointer to memory area s
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
