#include "main.h"
/**
 * is_prime-number - checks if numb is divisible
 * @n: num to be checked
 *
 * Return: number is divisible - 0.
 * if the num is indivisible - 1
 */
int is_prime_number(int n)
{
	int div = 0;

	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	result *= (is_prime_number(n, div + 1));

	return (result);
}
