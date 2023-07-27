#include "main.h"
/**
 * exec_cmd - executes the users given commands
 * @args: commands given
 *
 * Return: void
 */
void exec_cmd(char **args)
{
	int status;
	pid_t pid = fork();

	if (strcmp(args[0], "exit") == 0)
	{
		_exit(1);
	}
	if (pid < 0)
	{
		perror(args[0]);
	}
	if (pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror(args[0]);
			_exit(1);
		}
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}
