#include "main.h"

/**
 * _isalpha - checks if character is a letter
 * both lowercase or uppercase
 *
 * @c: 1 is c if true else 0
 *
 * Return: 1 for letters, 0 for the rest.
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
