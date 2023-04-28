#include "main.h"

/**
 * get_builtin - builtin that pais the command in the arg
 *
 * description: this function handles a struct which contains
 * env, exit,cd, unsetenv, setenv, help and it passes them
 * to their respective functions
 *
 * @cmd: command to examine
 *
 * Return: function pointer of the builtin command
 */
int (*get_builtin(char *cmd))(data_shell *)
{
	builtin_t builtin[] = {
		{ "env", _env },
		{ "exit", exit_shell },
		{ "setenv", _setenv },
		{ "unsetenv", _unsetenv },
		{ "cd", cd_shell },
		{ "help", get_help },
		{ NULL, NULL }
	}; /* builtin struct that handles important commands */
	int i;

	for (i = 0; builtin[i].name; i++)
	{
		if (_strcmp(builtin[i].name, cmd) == 0)
			break;
	}

	return (builtin[i].f);
}
