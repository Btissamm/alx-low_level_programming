#include "main.h"
#include <stdio.h>
/**
 * fizzbuzz - game
 * Return: fizz buzz test
 */
void fizzbuzz(void)
{int i;
	for (i = 0; i <= 100; i++)
	{ 	if (i % 3 != 0 && i % 5 != 0)
			printf("%d",i);
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
	}
}
int main(void)
{
	fizzbuzz();
	return (0);
}
