#include "holberton.h"
/**
 * _printf - printf function
 * @format: arguments passed by the user
 *
 * Return: int fn or -1
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int show;

	checker ops[] = {
		{"%c", print_c},
		{"%s", print_s},
		{"%%", print_percentage},
		{"%d", print_d_i},
		{"%i", print_d_i},
	};

	show = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(valist, format);
	show = revision(format, valist, ops);

	va_end(valist);
	return (show);
}
