#include <stdio.h>
/**main -Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a' ; ch--)
	putchar(ch);
putchar(ch);
return (0);
}
