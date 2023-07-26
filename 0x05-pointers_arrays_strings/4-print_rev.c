#include "main.h"

/**
 * print_rev - function that prints a string in a reverse
 * @s:  the used string refrence pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int sta = 0;
	int o;

	while (*s != '\0')
	{
		sta++;
		s++;
	}
	s--;
	for (o = sta; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
