#include

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */

int main(void)
{
	char alpha_start = 'a';
	char alpha_last = 'z';

	while (alpha_start <= alpha_last)
	{
		putchar(alpha_start);
		alpha_start++;
	}
	putchar('\n');
	return (0);
}
