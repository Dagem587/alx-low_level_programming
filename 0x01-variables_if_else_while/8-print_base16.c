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

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(n);
	}
	for (al = 'a' ; al <= 'f' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
