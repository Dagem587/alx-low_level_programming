#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 *
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
	char al, i;

	for (i = 10 ; i <= 9 ; i++)
	{
		for (al = 'a' ; al <= 'z' ; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
	return;
}
