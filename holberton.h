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

}oprions;

int print_principal(int c);

#endif
