#include "holberton.h"

/**
 * main - The O'l reliable main
 *
 * Return: int
 */

int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);

}
