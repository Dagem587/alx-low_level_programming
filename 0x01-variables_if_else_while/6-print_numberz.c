#include<stdio.h>

/**
 * main - the entry  point for the program
 *
 * Description: The program prints numbers from zero to nine
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(n);
	}
	puts("");
	return (0);
}
