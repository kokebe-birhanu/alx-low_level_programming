#include "main.h"

/**
 * prime2 - calculates if a number is prime recursively
 * @a: number to evaluate
 * @b: number that iterates from 1 to n
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
