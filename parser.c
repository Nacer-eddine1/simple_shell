#include "shell.h"
/**
 * is_cmd - it defines if a file is an executable command
 * @info: argument 1
 * @path: argument 2
 * Return: 1 if true, 0 if otherwise
 */
int is_cmd(info_t *info, char *path)
{
	struct stat st;

	(void)info;
	if (!path || stat(path, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}

/**
 * dup_chars - it duplicates characters
 * @pathstr: argument 1
 * @start: argument 2
 * @stop: argument 3
 * Return: pointer to new buffer
 */
char *dup_chars(char *pathstr, int start, int stop)
{
	static char buf[1024];
	int u = 0, v = 0;

	for (v = 0, u = start; u < stop; u++)
		if (pathstr[u] != ':')
			buf[v++] = pathstr[u];
	buf[v] = 0;
	return (buf);
}

/**
 * find_path - it finds this cmd in PATH string
 * @info: argument 1
 * @pathstr: argument 2
 * @cmd: argument 3
 * Return: NULL or full path of cmd if found
 */
char *find_path(info_t *info, char *pathstr, char *cmd)
{
	int u = 0, curr_pos = 0;
	char *path;

	if (!pathstr)
		return (NULL);
	if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
	{
		if (is_cmd(info, cmd))
			return (cmd);
	}
	while (1)
	{
		if (!pathstr[u] || pathstr[u] == ':')
		{
			path = dup_chars(pathstr, curr_pos, u);
			if (!*path)
				_strcat(path, cmd);
			else
			{
				_strcat(path, "/");
				_strcat(path, cmd);
			}
			if (is_cmd(info, path))
				return (path);
			if (!pathstr[u])
				break;
			curr_pos = u;
		}
		u++;
	}
	return (NULL);
}
