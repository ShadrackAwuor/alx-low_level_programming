#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * and for the multiples of three prints Fizz instead of the number
 * and for the multiple of five prints Buzzz
 * and for numbers which are multiples of both three and five print FizzBuzz
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
		} else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

