#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{int i = 0;
	while (*(s[i]) != '\0')
	{
		i = i+1;
	}
	return (i);
}
