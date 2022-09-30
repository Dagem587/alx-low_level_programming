#include "main.h"

/**
 * _strlen - returns th length of a string
 * @s: string to check
 * Return: 0 on success
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
