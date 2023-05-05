#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: the integer
 * Return: last digit
 */
int print_last_digit(int i)
{int a;
if (i < 0)
{
	i = -i;
	a = i % 10;
	return (a);
}
	else
{
	a = i;
	return (a);
}
}
