#include "shell.h"
#include <unistd.h>

/**
 * interactive - Checks if the shell is running in interactive mode.
 *
 * Return: 1 if in interactive mode, 0 otherwise.
 */
int interactive(void)
{
	if (isatty(STDIN_FILENO) && STDIN_FILENO <= 2)
		return (1);
	else
		return (0);
}

/**
 * is_delim - Checks if a character is a delimiter.
 * @c: The character to check.
 * @delim: The delimiter string.
 *
 * Return: 1 if the character is a delimiter, 0 otherwise.
 */
int is_delim(char c, char *delim)
{
	while (*delim != '\0')
	{
		if (*delim == c)
			return (1);
		delim++;
	}
	return (0);
}

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			i++;
		}
		else
		{
			break;
		}
	}

	return (result * sign);
}
