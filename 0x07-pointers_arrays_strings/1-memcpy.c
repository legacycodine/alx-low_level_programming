#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the copied memory
 * @src: source from which memory is copied
 * @n: number of bytes to be copied from src
 * Return: returns a char pointer dest
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
	{
		destination[index] = source[index];
	}
	return (dest);
}
