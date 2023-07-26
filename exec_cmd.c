#include "main.h"
/**
 * exec_cmd - executes the users given commands
 * @args: commands given
 *
 * Return: void
 */
void exec_cmd(char **args)
{
	int status, i = 0;
	pid_t pid = fork();

	if (pid < 0)
	{
		perror("fork");
	}
	if (pid == 0)
	{
		if (strcmp(args[0], "env") == 0)
		{
			while (environ[i] != NULL)
			{
				printf("%s\n", environ[i]);
				i++;
			}
		}
		else if (execve(args[0], args, NULL) == -1)
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
