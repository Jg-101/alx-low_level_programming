#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: The string to be searched.
 * @accept: accepted characters.
 *
 * Return: If a set os matched - a pointer to the matched byte.
 * if no set is mayched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0 ; accept[index] ; index++)
		{
			if (*s == accept[index])

				return (s);
		}
		s++;
	}
	return ('\0');
}
