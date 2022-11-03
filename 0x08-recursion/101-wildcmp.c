#include "main.h"
#include <stdio.h>

/**
 * int wildcmp - compare two strings recursively,
 * with asterick usage
 * @s1: string 1, does not include asterick
 * @s2: string 2 may include asterick
 * Return: 1 if strings compare, 0 if not
 */

int wildcmp(char *s1, char *s2);
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1 s2 + 1));

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
