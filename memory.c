#include "shell.h"
/**
 * bfree - it frees a pointer and NULL the address
 * @ptr: argument
 * Return: 1 if freed, 0 if otherwise
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
