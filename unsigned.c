#include "main.h"
/**
  * pr_unsign - prints unsigned int to the stdout
  * @ap: va_list param
  *
  * Return: 
  */
int pr_unsign(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int i = 0;
	int arr[20] = {0};
	int len;

	while (n)
	{
		arr[i++] = n % 10;
		n /= 10;
	}
	len = --i;
	while (i > -1)
	{
		_putchar( arr[i--]+ '0');
	}
	return (len);
}
