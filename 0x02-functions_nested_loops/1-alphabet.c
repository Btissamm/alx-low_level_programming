#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{ 
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
char ch;
        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
}
