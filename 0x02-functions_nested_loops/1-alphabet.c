#include<main.h>

/**
 * print_alphabet -  with lower case
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
