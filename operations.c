#include "holberton.h"
/**
* print_show - It prints to stdout.
* @c: Char to print.
* Return: It returns to stdout.
*/
int print_show(int c)
{
	return (write(1, &c, 1));
}
/**
* print_c - It prints to stdout.
* @valist: List.
* Return: It returns to stdout.
*/
int print_c(va_list valist)
{
		return (print_show(va_arg(valist, int)));
}
/**
* print_percentage - It prints to stdout.
* Return: It returns to stdout.
*/
int print_percentage(void)
{
			print_show('%');
			return (1);
}
/**
* print_s - It prints to stdout.
* @valist: List.
* Return: It returns to stdout.
*/
int print_s(va_list valist)
{
char *str;
int i;

	str = va_arg(valist, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		print_show(str[i]);
	}
	return (i);
	}
