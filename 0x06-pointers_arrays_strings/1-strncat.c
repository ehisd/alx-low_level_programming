#include "main.h"

/**
 * _strncat - Concantenation two strings
 * @dest: the strin to appended upon
 * @src: the str to be appended to dest
 * @n: the number of bytes
 * Return: A pointer to teh result
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
