#include "shell.h"

/**
 * interactive - returns true if the shell is in the interactive mode
 * @info: struct adrs
 *
 * Return: 1 if it's interactive mode, otherwise 0
 */

int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 *_atoi - converts a string to an integer
 *@str: the string to be converted
 *Return: 0 if no numbers in a string, the converted number otherwise
 */

// int _atoi(char *str)
{
	int i, sin = 1, flg = 0, outpt;
	unsigned int rslt = 0;

	for (i = 0;  str[i] != '\0' && flg != 2; i++)
	{
		if (str[i] == '-')
			sin *= -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			flg = 1;
			rslt *= 10;
			rslt += (str[i] - '0');
		}
		else if (flg == 1)
			flg = 2;
	}

	if (sin == -1)
		outpt = -rslt;
	else
		outpt = rslt;

	return (outpt);
}

/**
 * is_delim - will check if the character is a delimeter or not
 * @ch: is the character to check it
 * @delim: is the delimeter str
 * Return: 1 if it's true, 0 if it's false
 */
int is_delim(char ch, char *delim)
{
	while (*delim)
		if (*delim++ == ch)
			return (1);
	return (0);
}

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
