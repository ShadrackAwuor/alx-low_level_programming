#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times
* Return:void
*/

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (i = 1; i < 10; i++)
	{
		for (c = 'a'; c = 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}

