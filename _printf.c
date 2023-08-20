#include "main.h"
/**
  * create_st_spec - Creates a st_spec strut
  * @spec: the specifier like 'i, x, c ...'
  */
/*st_spec[] create_spec(char spec)
{
	st_spec spec[] = {
		{"i", pr_int},
		{"d", pr_int},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 2)
	{
		if (*(spec[i].s) == spec)
			return (spec);
	}
	return (0);
}
*/

/**
  * _printf - like the printf in the stdio.h
  * @format: string that contains flag, width, ...
  *
  * Return: the number of characters printed, otherwise -ve number
  */
int _printf(const char *format, ...)
{
	int i, j;
	st_spec specArr[] = {
		{"i", pr_int},
		{"d", pr_int},
		{NULL, NULL}
	};
	va_list ap;
	int printSize = 0;

	va_start(ap, format);
	if (!format)
	{
		return (-1);
	}
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (j < 2)
			{
				if (format[i + 1] == *(specArr[j].s))
					printSize += specArr[j].f(ap), i++;
				j++;
			}
		} else {
			_putchar(format[i]);
			printSize++;
		}
		i++;
	}	
	return (printSize);
}
