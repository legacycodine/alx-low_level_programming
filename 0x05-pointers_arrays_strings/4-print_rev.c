#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: no return
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
