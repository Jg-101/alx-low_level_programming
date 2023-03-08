#include "main.h"
/**
 * number - find sqareroot of natural sqrt num.
 * @n: natural num starting from 1.
 * @root: sqrt num to be found.
 *
 * Return: sqrt of answer.
 * if root is not natural sqrt return -1.
 * if root less than 0 return -1.
 */
int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

/**
 * _sqrt_recursion - Finds the square root of inpt
 * @n: number to find squareroot
 *
 * Return: if the number has a natural squareriit - the squareroot = 1.
 * if the number does not have a natural squareroot - -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
