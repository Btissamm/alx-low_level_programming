#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9, followed by a new line except for 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
        char a;

        for (a = 48; a <= 57; a++)
        {if (a != 2 && a != 4)
                _putchar(a);
        }
        _putchar('\n');
}