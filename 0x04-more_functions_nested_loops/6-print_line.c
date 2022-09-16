#include <studio.h>
#include "main.h"

/**
 * print_line - prints a straight line.
 * @n: parameter
 * Return: returns nothing
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			putchar('');
	}

	_putchar('\n');
}
