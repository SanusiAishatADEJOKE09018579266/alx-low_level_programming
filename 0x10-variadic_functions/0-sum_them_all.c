#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function
 *
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list nums;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(valist);
	return (sum);
}

