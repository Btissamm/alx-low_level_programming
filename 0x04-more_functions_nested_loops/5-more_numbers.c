#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 10 lines of ints
 */

void more_numbers(void)
{
	int i;
	int a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar('0' + (a / 10));
			}
			_putchar('0' + (a % 10));
		}
		_putchar('\n');
	}
}
