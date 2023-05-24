#include "main.h"
/**
 * _strcat -  concatenates two strings.
 * @dest: first string
 * @src: second str
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		_putchar (*dest);
		dest++;
	}
	if (*dest = '\0')
	{
		while (*src != '\0')
			{
				_putchar (*src);
				src++;
			}
	}
	_putchar('\n');
	
}
