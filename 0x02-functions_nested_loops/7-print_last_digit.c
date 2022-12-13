#include "main.h"

/**
 * print_last_digit - prints the last number of a digit
 *
 * @c: the integer variable used in the function
 *
 * Return: value of the last digit
 */

int print_last_digit(int c)
{
	int ld = c % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	return (ld);
}
