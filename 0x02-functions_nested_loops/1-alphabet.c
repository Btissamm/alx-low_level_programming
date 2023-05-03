#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
void print_alphabet(void)
{
char ch;
        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
}
int main(void)
{ 
	print_alphabet();
	return (0);
}
