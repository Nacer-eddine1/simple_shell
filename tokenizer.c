#include "shell.h"
/**
 * **strtow - it splits a string into words
 * @str: argument 1
 * @d: argument 2
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **strtow(char *str, char *d)
{
	int u, v, x, y, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (u = 0; str[u] != '\0'; u++)
		if (!is_delim(str[u], d) && (is_delim(str[u + 1], d) || !str[u + 1]))
			numwords++;

	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (u = 0, v = 0; v < numwords; v++)
	{
		while (is_delim(str[u], d))
			u++;
		x = 0;
		while (!is_delim(str[u + x], d) && str[u + x])
			x++;
		s[v] = malloc((x + 1) * sizeof(char));
		if (!s[v])
		{
			for (x = 0; x < v; x++)
				free(s[x]);
			free(s);
			return (NULL);
		}
		for (y = 0; y < x; y++)
			s[v][y] = str[u++];
		s[v][y] = 0;
	}
	s[v] = NULL;
	return (s);
}

/**
 * **strtow2 - it splits a string into words
 * @str: argument 1
 * @d: argument 2
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **strtow2(char *str, char d)
{
	int u, v, x, y, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (u = 0; str[u] != '\0'; u++)
		if ((str[u] != d && str[u + 1] == d) ||
		    (str[u] != d && !str[u + 1]) || str[u + 1] == d)
			numwords++;
	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (u = 0, v = 0; v < numwords; v++)
	{
		while (str[u] == d && str[u] != d)
			u++;
		x = 0;
		while (str[u + x] != d && str[u + x] && str[u + x] != d)
			x++;
		s[v] = malloc((x + 1) * sizeof(char));
		if (!s[v])
		{
			for (x = 0; x < v; x++)
				free(s[x]);
			free(s);
			return (NULL);
		}
		for (y = 0; y < x; y++)
			s[v][y] = str[u++];
		s[v][y] = 0;
	}
	s[v] = NULL;
	return (s);
}
