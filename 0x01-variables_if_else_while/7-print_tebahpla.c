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
	char c = 'z';

	while (c >= 'a')
	{
	putchar(c);
	c--;
	}
	putchar('\n');
	return (0);
}
