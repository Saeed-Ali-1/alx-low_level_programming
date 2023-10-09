#include <stdio.h>
/**
 * main - start point
 *
 * description: print numbers from 0 to 9 seprated by commas
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
