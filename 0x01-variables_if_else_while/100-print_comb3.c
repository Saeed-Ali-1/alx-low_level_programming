#include <stdio.h>
/**
 * main - start point
 *
 * description: print all the possible cominations of two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (int i = 0; i <= 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
		putchar(i + '0');
		putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
