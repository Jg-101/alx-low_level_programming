#include "main.h"
/**
 * is_prime_number - checks ifnumber is prime.
 * @n: num to be checked
 *
 * Return: number is divisible - 0.
 * if the num is indivisible - 1
 */
int is_prime_number(int n)
{
	int _is_prime = 0;

	if (n < 2)
		_is_prime = 0;
	else if (n == 2)
		_is_prime = 1;
	else if (n % 2 == 1)
		_is_prime = 1;

	return (_is_prime);
}
