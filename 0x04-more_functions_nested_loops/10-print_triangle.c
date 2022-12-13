#include "main.h"
#include<stdio.h>

/**
 * print_triangle - draws a triangle in terminal
 * @size: height and width of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < (size - i))
				{
					putchar(' ');
					continue;
				}
				putchar('#');
			}
			putchar('\n');
		}
	}
}
