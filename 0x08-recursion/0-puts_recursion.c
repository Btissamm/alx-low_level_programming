include "main.h"
/**
 * _puts_recursion - prints a str
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{	_putchar(*s);
		s++;
	}
	_putchar('\n');
}
