#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * _abs - compute the absolute value of an intefer
 * @i: input number as an integer.
 * Return: absolute values
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (1);
	}
	else
	{
		return (i * -1);
	}
}
