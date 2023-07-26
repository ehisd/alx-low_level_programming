#include <stdio.h>

/**
 * print_array -  function that prints elements of an array of integers
 * @a: array name
 * @n: is the number of element ofvthe array to be
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
