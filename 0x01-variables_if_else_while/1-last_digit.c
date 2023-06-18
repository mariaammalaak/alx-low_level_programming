#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the value of n status:
 *		greater than, is zero and is not less than 6.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("last digit of %i is %i and is 0\n", n, ld);
	else
		printf("last digit of %i is %i and less than 6 and not 0\n", n, ld);
	return (0);
}
