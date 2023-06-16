#include <stdio.h>
/**
 * main - print in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

