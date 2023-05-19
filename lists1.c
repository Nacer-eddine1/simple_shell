#include "shell.h"
/**
 * list_len - it determines length of linked list
 * @h: argument
 * Return: the size of list
 */
size_t list_len(const list_t *h)
{
	size_t u = 0;

	while (h)
	{
		h = h->next;
		u++;
	}
	return (u);
}

/**
 * list_to_strings - it returns an array of strings of  list->str
 * @head: argument
 * Return: array of strings
 */
char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t u = list_len(head), v;
	char **strs;
	char *str;

	if (!head || !u)
		return (NULL);
	strs = malloc(sizeof(char *) * (u + 1));
	if (!strs)
		return (NULL);
	for (u = 0; node; node = node->next, u++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (v = 0; v < u; v++)
				free(strs[v]);
			free(strs);
			return (NULL);
		}

		str = _strcpy(str, node->str);
		strs[u] = str;
	}
	strs[u] = NULL;
	return (strs);
}


/**
 * print_list - it prints all elements of list_t linked list
 * @h: argument
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t u = 0;

	while (h)
	{
		_puts(convert_number(h->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		u++;
	}
	return (u);
}

/**
 * node_starts_with - it returns node whose string starts with prefix
 * @node: argument 1
 * @prefix: argument 2
 * @c: argument 3
 * Return: match node or null
 */
list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}

/**
 * get_node_index - it gets the index of a node
 * @head: argument 1
 * @node: argument 2
 * Return: -1 or index of node
 */
ssize_t get_node_index(list_t *head, list_t *node)
{
	size_t u = 0;

	while (head)
	{
		if (head == node)
			return (u);
		head = head->next;
		u++;
	}
	return (-1);
}
