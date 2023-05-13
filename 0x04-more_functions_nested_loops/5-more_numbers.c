#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line
 * Return: 10 lines of ints
 */
void more_numbers(void)
{
	int i;
	char a;

	for (i = 0; i <= 9; i++)
	{
		for (a = '0'; a <= '\x0E'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
