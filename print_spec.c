#include "main.h"
/**
  * pr_int - prints integer "%d" or "%i" to the stdout
  * @ap: va_list parameter
  *
  * Return: Number of digits printed
  */
int pr_int(va_list ap)
{
	int n = va_arg(ap, int);
	int arr[15] = {0};
	int i, len;

	i = 0;
	while (n)
	{
		arr[i++] = n % 10;
		n /= 10;
	}
	len = i--;
	while (i > -1)
	{
		_putchar(arr[i--] + '0');
	}
	/*len is the number of digits*/
	return (len);
}
/**
  * pr_char - prints a char to the stdout
  * @ap: variadic function parameter
  *
  * Retrun: Number of chars printed
  */
int pr_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
  * pr_str - prints a string to the stdout
  * @ap: variadic function parameter
  *
  * Retrun: Number of chars printed
  */
int pr_str(va_list ap)
{
	char *s = va_arg(ap, char *);
	int len = 0;

	while (*s)
		_putchar(*s++), len++;
	return (len);
}
/**
  * pr_perc - prints a % to the stdout
  * @ap: variadic function parameter
  *
  * Retrun: Number of chars printed
  */

int pr_perc(va_list ap)
{
	(void)ap;
	_putchar('%');
	return (1);
}
