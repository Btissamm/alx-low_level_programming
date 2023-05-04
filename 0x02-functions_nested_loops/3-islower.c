#include "main.h"
/**
 * _islower - ch is lowercase function or not
 *ch: The character to be checked
 * Return: 0 or 1
 */
int _islower(int ch)
{
if (ch >= 'a' && ch <= 'z')
return (1);
else
return (0);
}
