#include "holberton.h"
/**
* _printf - my file printf
* @format: my prototype
* Return: 0 always
*/
int _printf(const char *format, ...)
{
int i = 0;
int counter = 0;
va_list valist;
if (veri(format) == 0)
{ return (-1); }

va_start(valist, format);
while (format != NULL && *format != '\0')
{
	if (*format == '%')
	{
	format++;
	switch (format[i])
	{
		case 'c':
		print_c(valist);
		format++;
		break;
		case 's':
		print_s(valist);
		format++;
		break;
		case '%':
		print_percentage();
		format++;
		break;
		case 'd':
		print_number(valist);
		format++;
		break;
		case 'i':
		print_number(valist);
		format++;
		break;
	}
}	else
	{ write(1, &(*format++), 1);
	}
	counter++;
} return (counter);
}
