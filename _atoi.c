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
 * @ch: The character to check.
 * @delim: The delimiter string.
 *
 * Return: 1 if the character is a delimiter, 0 otherwise.
 */
int is_delim(char ch, char *delim)
{
	while (*delim != '\0')
	{
		if (*delim == ch)
			return (1);
		delim++;
	}
	return (0);
}

/**
 * _isalpha - Checks if a character is alphabetic.
 * @ch: The character to check.
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

/**
 * _atoi - Converts a string to an integer.
 * @str: The string to be converted.
 *
 * Return: The converted integer value.
 */
int _atoi(char *str)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (strr[i] - '0');
			i++;
		}
		else
		{
			break;
		}
	}

	return (result * sign);
}
