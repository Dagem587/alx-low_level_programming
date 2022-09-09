#include<stdio.h>

/**
 * main - the entry point of the program
 *
 * Description: 'The program prints alphabets in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	putchar('\n');

	return (0);
}
