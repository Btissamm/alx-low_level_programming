#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the int to check
 * Return: the 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <=90)
		return(1);
	else 
		return(0);
}
