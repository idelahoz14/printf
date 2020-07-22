#include "holberton.h"
/**
 * print_number - print decimal int
 * @valist: argument
 * Return: i
 */
int print_d_i(va_list valist)
{
	long int n, i;
	char *ptr;

	n = va_arg(valist, int);

	ptr = _itoa(n, 10);

	for (i = 0; ptr[i] != '\0'; i++)
	{
		print_show(ptr[i]);
	}
	return (i);
}
