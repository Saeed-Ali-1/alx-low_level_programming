#include <stdio.h>

/**
 * main - start point
 *
 * description: print all the letters
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	while (C <= 'Z')
	{
	putchar(C);
	C++;
	}
	putchar('\n');
	return (0);
}
