#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putcahar(lowerCase);
lowerCase += 1;
}
while (upperCase <= 'Z')
{
putcahar(upperCase);
upperCase += 1;
}
putchar('\n');
return (0);
}
