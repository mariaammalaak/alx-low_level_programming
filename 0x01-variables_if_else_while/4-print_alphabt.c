#include <stdio.h>
/**
 * main - Entry point
 * Description 'print alphabets except p and e'
 * Return: Always 0
*/

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 112)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
