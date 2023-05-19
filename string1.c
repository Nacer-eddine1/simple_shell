#include "shell.h"
/**
 * _strcpy - it copies a string
 * @dest: argument 1
 * @src: argument 2
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int u = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[u])
	{
		dest[u] = src[u];
		u++;
	}
	dest[u] = 0;
	return (dest);
}

/**
 * _strdup - it duplicates a string
 * @str: argument
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 *_puts - it prints an input string
 *@str: argument
 * Return: Nothing
 */
void _puts(char *str)
{
	int u = 0;

	if (!str)
		return;
	while (str[u] != '\0')
	{
		_putchar(str[u]);
		u++;
	}
}

/**
 * _putchar - it writes the character c to stdout
 * @c: argument
 *
 * Return: 1 on success
 * -1 on error, and errno is set appropriately
 */
int _putchar(char c)
{
	static int u;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || u >= WRITE_BUF_SIZE)
	{
		write(1, buf, u);
		u = 0;
	}
	if (c != BUF_FLUSH)
		buf[u++] = c;
	return (1);
}
