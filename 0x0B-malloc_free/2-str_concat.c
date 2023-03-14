#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - count array
 * @s: array of elem
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0') /*count chat of str*/
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - back a pointer to array
 * @s1: Array one
 * @s2: array two
 * Return: always on array dinamic
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	/*if the array is empty*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*count size total*/
	size = (_strlen(s1) + _strlen(s2) + 1);

	/*malloc*/
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	/*concatenate arrays*/
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dst + i) = *(s1 + i);

	for (j = 0; *(s1 + j) != '\0'; j++)
	{
		*(dst + i) = *(s1 + j);
		i++;
	}
	return (dst);
}
