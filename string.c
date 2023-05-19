#include "shell.h"
/**
 * _strlen - it returns the length of a string
 * @s: argument
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int u = 0;

	if (!s)
		return (0);

	while (*s++)
		u++;
	return (u);
}

/**
 * _strcmp - it performs lexicogarphic comparison of two strangs
 * @s1: argument 1
 * @s2: argument 2
 * Return: positive if s1 > s2, negative if s1 < s2, and zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - it checks if needle starts with haystack
 * @haystack: argument 1
 * @needle: argument 2
 * Return: NULL or address of next char of haystack
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - it concatenates two strings
 * @dest: argument 1
 * @src: argument 2
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
