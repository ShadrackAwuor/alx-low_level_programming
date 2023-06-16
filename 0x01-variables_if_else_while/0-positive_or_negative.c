#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Enter number: %d\n", n);
	scanf("%d\n", &n);

	if(n > 0){
		printf("%d: is positive\n", n);
	} else if(n == 0){
		printf("%d: is zero\n", n);
	}else {
		printf("%d: is negative\n", n);
	}

	printf("value of n is : %d\n", n);

	return (0);
}

