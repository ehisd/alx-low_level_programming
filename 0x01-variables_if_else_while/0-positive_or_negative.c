#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative orzero.
 * Return: 0 on Success
 */
int main(void)
{
	int n:

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		 printf("%d is %s\n", n, "zero");
	}
	return (0);
}
