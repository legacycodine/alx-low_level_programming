#include "main.h"

/**
 * positive_or_negative - prints positive or negative
 * @i: integar
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i < 0)
		printf("%d is negative", i);
	else if (i == 0)
		printf("%d is zero", i);

}
