#include "holberton.h"
/**
 * revision - checks type of operation to be used
 * @format: first argument passed by user
 * @valist: variadic function
 * @ops: checker struct
 * Return: int/count
 */
int revision(const char *format, va_list valist, struct op ops[])
{
	int i = 0, j = 0, count = 0;

	while (format != NULL && format[i] != 0)
	{
		if (format[i] != '%' && format[i] != 0)
		{
			count += print_show(format[i]);
		}
		else if (format[i] == '%')
		{
			while (j < 5)
			{
				if (format[i + 1] == ops[j].ptr[1])
				{
					count += ops[j].s(valist);
					i++;
					break;
				}
				if (j == 4 && format[i + 1] != ops[j].ptr[1])
				{
					if (!format[i + 1])
					{
						return (-1);
					}
					else
					{
						count += print_show(format[i]);
					}
				}
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (count);
}
