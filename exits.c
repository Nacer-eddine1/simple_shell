#include "shell.h"
/**
 * *_strncpy - it is used to copy a string
 * @dest: argument 1
 * @src: argument 2
 * @n: argument 3
 * Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int u, v;
	char *s = dest;

	u = 0;
	while (src[u] != '\0' && u < n - 1)
	{
		dest[u] = src[u];
		u++;
	}
	if (u < n)
	{
		v = u;
		while (v < n)
		{
			dest[v] = '\0';
			v++;
		}
	}
	return (s);
}

/**
 * *_strncat - it is used to concatenate two strings
 * @dest: argument 1
 * @src: argument 2
 * @n: argument 3
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int u, v;
	char *s = dest;

	u = 0;
	v = 0;
	while (dest[u] != '\0')
		u++;
	while (src[v] != '\0' && v < n)
	{
		dest[u] = src[v];
		u++;
		v++;
	}
	if (v < n)
		dest[u] = '\0';
	return (s);
}

/**
 * *_strchr - it is used to locate a character in a string
 * @s: argument 1
 * @c: argument 2
 * Return: (s)
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
