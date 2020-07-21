#include "holberton.h"
/**
* _printf - my file printf
* @format: my prototype
* Return: 0 always
*/
int _printf(const char *format, ...)
{
int i = 0;
int p;
int counter = 0;
va_list valist;

va_start(valist, format);
while (format != NULL && *format != '\0')
{
	if (*format == '%')
	{
	format++;
	switch (format[i])
	{
		case 'c':
		p = print_c(valist);
		format++;
		break;
		case 's':
		p = print_s(valist);
		format++;
		break;
		return (p);
		case '%':
		p = print_percentage();
		format++;
		break;
		case 'd':
		p = print_number(valist);
		format++;
		break;
		case 'i':
		p = print_number(valist);
		format++;
		break;
	}
}	else
	{ write(1, &(*format++), 1);
	}
	counter++;
} return (counter);
}
