#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: is an integer used for the function
 *
 * Return: 0 on success
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
