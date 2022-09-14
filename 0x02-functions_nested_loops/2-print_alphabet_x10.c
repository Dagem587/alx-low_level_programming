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
		al = 'a';
		while (al <= 'a')
		{
			_putchar(al);
			al++;
		}
	}
	_putchar('\n');
	i++;
}
