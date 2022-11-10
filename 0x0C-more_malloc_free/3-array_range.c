#include "main.h"
/**
  * *array_range - create an array of integers inclusive of min
  * and max
  * @min: min value to include
  * @max: max value to include
  * Return: pointer to newly created array
  */
int *array_range(int min, int max)
{
	int *intarr;
	int i = 0, n;

	if (min > max)
		return (NULL);

	intarr = malloc(((max - min) + 1) * sizeof(int));

	if (intarr == NULL)
		return (NULL);
	for (n = min; n <= max; n++)
	{
		intarr[i] = n;
		i++;
	}

	return (intarr);
}
