#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @srt: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
*/
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))index++;

		if (Str[index -1] == ' ' ||
				Str[index -1] == '\t' ||
				Str[index -1] == '\n' ||
				Str[index -1] == ',' ||
				Str[index -1] == ';' ||
				Str[index -1] == '.' ||
				Str[index -1] == '!' ||
				Str[index -1] == '?' ||
				Str[index -1] == '"' ||
				Str[index -1] == '(' ||
				Str[index -1] == ')' ||
				Str[index -1] == '{' ||
				Str[index -1] == '}' ||
				index == 0)
			str[index] -= 32;

		index++;
	}
	return (str);
}
