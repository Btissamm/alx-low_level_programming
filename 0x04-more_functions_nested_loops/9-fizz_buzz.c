#include "main.h"
#include <stdio.h>
/**
 * fizzbuzz - game
 * main - main func
 * Return: fizz buzz test
 */
void fizzbuzz(void)
{	
int i;

	for (i = 1; i <= 100; i++)
	{	
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d ",i);
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
	}
}
int main(void)
{
	fizzbuzz();
	return (0);
}
