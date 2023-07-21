#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Determine a number
 * @i: Integer
 * Return: 0 on Success
 */
int positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is %s\n", i, "negative");
	else if (i > 0)
		printf("%d is %s\n", i, "positive");
	else
		printf("%d is %s\n", i, "zero");
	return (0);
}
