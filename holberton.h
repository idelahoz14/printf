#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
/**
 * struct op - checker struct
 *
 * @ptr: possibility
 * @s: function to be used
 */
typedef struct op
{
	char *ptr;
	int (*s)();
} checker;

int print_show(int c);
int print_c(va_list valist);
int print_percentage(void);
int print_s(va_list valist);
int print_d_i(va_list valist);
char *_itoa(long int num, int base);
int revision(const char *format, va_list valist, struct op ops[]);

#endif
