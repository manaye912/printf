#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * binary - print a binary number
 *@va:unsigned integer input
 *
 * Return: no return
 */
int binary(va_list va)
{
	unsigned int c;
	unsigned int  i, j;
	unsigned int arr[100];

	c = va_arg(va, int);
	i = 0;
	if (c == 0)
	{
		printf("%s\n", '0');
		return (1);
	}
	while (c > 0)
	{
		arr[i] = c % 2;
		c = c / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d\n", arr[j] + '0');
	return (i);
}
