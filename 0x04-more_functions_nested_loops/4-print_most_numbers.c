#include "main.h"

/**
 * print_most_numbers.c - print the numbers 0 up to 9
 * Description: The number to exclude 2 and 4
 * Return: The result since 0 to 9
 */

void print_most_numbers.c(void)

{
	int x = 0;
	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
