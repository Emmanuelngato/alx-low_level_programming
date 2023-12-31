#include "main.h"
/**
 * prime_a - Calculate if its a prime
 * @a: input
 * @b: divisor
 * Return: (0)
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));

}
/**
 * is_prime_number - checks if a given integer is  a prime number
 * @n: the integer to check
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
