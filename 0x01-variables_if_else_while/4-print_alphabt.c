#include <stdio.h>

/**
 * main - start point
 *
 * description: letters except e and q
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
