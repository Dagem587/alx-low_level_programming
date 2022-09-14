#include "main.h"

/**
 *void print_alphabet(void) - prints lower case alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
}
