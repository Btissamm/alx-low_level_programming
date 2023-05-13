#include "main.h"
	#include <unistd.h>
	/**
	 * _putchar - prints char
	 * @c: the char
	 * Return: 0 on success
	 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
