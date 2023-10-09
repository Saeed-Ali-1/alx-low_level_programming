#include <stdio.h>

/**
 * main - start point
 *
 * description: print the lowercase letters
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
