#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'a';

for (ch = 'a'; ch++; ch = 'z') 
	putchar (ch);
char ch = 'A';
for (ch = 'A'; ch++; ch = 'Z')
	putchar (ch);
putchar ('\n');
return (0);
}
