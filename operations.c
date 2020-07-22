#include "holberton.h"
/**
* print_c - characters
* @valist: list
* Return: it return stdout
*/
int  print_c(va_list valist)
{
		int c = va_arg(valist, int);
			write(1, &(c), 1);
		return (1);
}
/**
* print_s - characters
* @valist: list
* Return: it return stdout
*/
int print_s(va_list valist)
{
	int counter = 0;
	char *s = va_arg(valist, char *);

	if (!s)
	{
		s = "(null)";
	}
	while (*s)
	{
		write(1, &(*s++), 1);
		counter++;
	}
	return (counter);
}
