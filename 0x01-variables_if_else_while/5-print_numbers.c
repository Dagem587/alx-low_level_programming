#include<stdio.h>

/**
 * main - entry point of the program
 *
 * Description: 'Prints all single digit numbers of base ten'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		printf("%d\n", n);
	}
	puts("");
	return (0);
}
