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
 * print_percentage - It prints to stdout.
 * Return: It returns to stdout.
 */
int print_percentage(void)
{
	print_show('%');
	return (1);
}
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
