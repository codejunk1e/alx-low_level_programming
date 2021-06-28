#include "holberton.h"
#include <stdio.h>

/**
 * _puts - Function that prints a string, followed by a new line.
 *
 * @str: String to be printed.
 */

void _puts(char *str)
{

	int i = 0;

	while (str[i])
	{
		if (str[i] == 0)
		{
			_putchar('\0');
			_putchar('\n');
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
}
