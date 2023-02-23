#include "main.h"
/**
 * _isdigit - checks if the numb if=s b/n 0/9
 * @c: input num
 * Return: 1 if is a number (0 to 9), 0 in other case
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
