#include "shell.h"

/**
 * _myhelp - it changes th current dir of the process
 * @info: used to maintain a constant function prototype
 * Return: Always 0 (Success)
 */
int _myhelp(info_t *info)
{
	char **arg_ary;

	arg_ary = info->argv;
	_puts("help call works. Function is not implemented yet \n");
	if (0)
		_puts(*arg_ary);
	return (0);
}

/**
 * _myexit -to exit the shell
 * @info: used to maintain a constant function prototype. it
 *   is the structure contains the potential argmnts
 * Return: (0) if info.argv[0] != "exit"
 */
int _myexit(info_t *info)
{
	int extchk;

	if (info->argv[1])  /* If there is an exit arguement */
	{
		extchk = _erratoi(info->argv[1]);
		if (extchk == -1)
		{
			info->status = 2;
			print_error(info, "Invalide number: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}

/**
 * _myhelp - it changes th current dir of the process
 * @info: used to maintain a constant function prototype
 * Return: Always 0 (Success)
 */
int _myhelp(info_t *info)
{
	char **arg_ary;

	arg_ary = info->argv;
	_puts("help call works. Function is not implemented yet \n");
	if (0)
		_puts(*arg_ary);
	return (0);
}

/**
 * _myhelp - it changes th current dir of the process
 * @info: used to maintain a constant function prototype
 * Return: Always 0 (Success)
 */
int _myhelp(info_t *info)
{
	char **arg_ary;

	arg_ary = info->argv;
	_puts("help call works. Function is not implemented yet \n");
	if (0)
		_puts(*arg_ary);
	return (0);
}
