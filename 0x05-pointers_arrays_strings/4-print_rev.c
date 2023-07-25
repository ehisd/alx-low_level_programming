/**
 * print_rev - function that prints a string in a reverse
 * @s:  the used string refrence pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
