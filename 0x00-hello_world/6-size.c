#include<stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
        char achar;
        int aint;
        long along;
        long long alonglong;
        float afloat;
  
        printf("size of a char: %lu byte(s)\n", sizeof(achar));
	printf("Size of an int: %lu byte(s)\n", sizeof(aint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
	printf("size of a float: %lu byte (s)\n", sizeof(afloat));
	return (0);
}
