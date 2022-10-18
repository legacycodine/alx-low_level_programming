#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */

int main(void)
{
	int digit;

	while (digit < 10)
	{
		putchar(48 + digit);
		if (digit != 10 - 1)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
