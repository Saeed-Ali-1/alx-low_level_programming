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
	for (int i = 0; i <= 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
