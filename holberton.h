#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct opt
{

	char *str;
	int (*arg)();

}options;

int  print_c(va_list valist);
int print_s(va_list valist);

int print_printf(int c);
char *_itoa(long int num, int base);

#endif
