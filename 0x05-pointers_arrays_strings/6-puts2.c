#include "main.h"




/**
 * puts2 - print every other character of a string
 * @str:  The string to be treated
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	puts2(str[i]);
	i++;
	}
	puts2('\n');
}
