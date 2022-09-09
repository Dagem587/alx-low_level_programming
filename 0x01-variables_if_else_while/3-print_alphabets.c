#include<stdio.h>

/**
 * main - the entry point for the program
 *
 * Description: 'The program prints alphabets in lowercase and uppercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al;
	char bt;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		putchar(al);
	}
	for (bt = 'A' ; bt <= 'Z' ; bt++)
	{
		putchar(bt);
	}
	putchar('\n');
	return (0);
}
