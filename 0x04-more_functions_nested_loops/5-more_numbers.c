#include "main.h"
#include<stdio.h>

/**
 * more_numbers - print numbers form 0-14 ten times
 */

void more_numbers(void)
{
	int c;

	for (c = 0; c < 15; c++)
	{
		if (c < 10)
		{
			putchar(c + 48);
		}
		else
		{
			putchar(c + 48 - 9);
		}
		putchar('\n');
	}
}

