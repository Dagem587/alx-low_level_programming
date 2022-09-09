#include<stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: 'The program avoids q and e while printing the whole alphabet'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		if (al != 'e' && al != 'q')
		putchar(al);
	}
	putchar('\n');
	return (0);
}
