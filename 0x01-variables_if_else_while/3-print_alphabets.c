#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char ch;

for (ch ='a'; ch++; ch = 'z') 
	putchar (ch);
for (ch ='A'; ch++; ch = 'Z')
	putchar (ch);
return (0);
}
