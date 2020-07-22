#include "holberton.h"
/**
 * print_number - print decimal int
 * @ap: argument
 * Return: i
 */
int print_number(va_list valist)
{
	long int p, i;
	char *str;

	p = va_arg(valist, int);
	str = _itoa(p, 10);

	for (i = 0; str[i] != '\0'; i++)
	{
		print_show(str[i]);
	}
	return (i);
}
