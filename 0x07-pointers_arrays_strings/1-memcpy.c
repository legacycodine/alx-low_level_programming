#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the copied memory
 * @src: source from which memory is copied
 * @n: number of bytes to be copied from src
 * Return: returns a char pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int night = 0; /*same code as memset*/

	while (n > 0)
	{
		dest[night] = src[night];
		night++;
		n--;
	}
	return (dest);
}
