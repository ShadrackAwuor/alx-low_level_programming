#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 *
 */

int	main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, ", 48);
	write(2, "2015-10-19\n", 11);
	return (1);
}

