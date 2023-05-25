#include "main.h"
/**
 * _sqrt_recursion - square root
 * @n: the int
 * Return: result
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
