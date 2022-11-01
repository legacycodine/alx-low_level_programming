#include "main.h"

/**
 * _memset - fills memory with a constant bytes
 * @s: string memory to be filled by b
 * @b: constant byte to fill s memory
 * @n: first n bytes to be filled in s
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int night = 0; /*night is my variable and was assigned 0*/

	while (n > 0) /*as long as n is less than 0*/
	{
		s[night] = b; /*night is assigned to our char*/
		night++; /*post-increment, value first increment*/
		n--; /*post-decrement*/
	}
	return (s); /*returning pointer to the memory of s*/
}
