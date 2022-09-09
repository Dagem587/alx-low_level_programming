#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;

	for (n = 48 ; n <= 57 ; n++)
	{
		for (i = n + 1; i < 58; i++)
		{
			putchar(n);
			putchar(i);

			if (n != 56 || i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
