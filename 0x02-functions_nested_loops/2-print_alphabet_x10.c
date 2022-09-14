#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{

	char al;
	int i;

	i = 0;

	while (i < 10)
	{
		for (al = 'a' ; al <= 'z' ; al++)
		{
			_putchar(al);
		}
	}
	_putchar('\n');
	i++;
}
