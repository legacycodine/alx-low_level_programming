#include <stdio.h>

/**
 * main - Initialization of alphabet code
 * Return: Always 0
 */

int main(void)
{
	char lower_alpha = 'a';
	char lower_alpha_end = 'z';

	for (; lower_alpha <= lower_alpha_end; lower_alpha++)
	{
		if (lower_alpha == 'q' || lower_alpha == 'e')
		{
			continue;
		}
		putchar(lower_alpha);
	}
	putchar('\n');
	return (0);
}
