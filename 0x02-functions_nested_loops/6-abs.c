#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @c: the int that we will use for the function
 *
 * Return: 0 on success
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
