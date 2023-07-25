#include <stdio.h>

/**
 * _puts - prints a string
 * @str: pointer to the string
 * Return: string and a ne line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	putchar(str[i]);
	i++;
	}
	putchar('\n');
}
