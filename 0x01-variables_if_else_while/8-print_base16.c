#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char al;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
	}
	for (al = 97 ; al <= 102 ; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
