#include "main.h"
#include<stdio.h>

/**
 * print_line - prints straight line
 * @n: integer used in the function
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			putchar('_');
	}
	putchar('\n');
}



