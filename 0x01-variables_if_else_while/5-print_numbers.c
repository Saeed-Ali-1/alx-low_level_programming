#include <stdio.h>
/**
 * main - start point
 *
 * description: print numbers from 0 to 10
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

