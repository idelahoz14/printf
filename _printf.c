#include "holberton.h"
/**
*
*
*
*/
int _printf(const char *format, ...)
{

	options func[] = 
	{
		{"%c", print_char}
		{"%c", print_c},
		{"%s", print_s},
		{"%%", print_percentage},
		{"%d", print_d_i},
	}
}