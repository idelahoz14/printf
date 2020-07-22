#include "holberton.h"
/**
* veri - check if the input is correct
* 
*
*/
int veri(const char *format)
{
  if (format == NULL)
  {return(0);}
  if (format[0] == '%' && format[1] == '\0')
    {return (0);}
	return(1);
}