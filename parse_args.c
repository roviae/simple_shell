#include "main.h"
/**
 * parse_args - parses args
 * @buff: is pointer to buff
 * @args: double pointer to arguments
 *
 * Return: int
*/
int parse_args(char *buff, char **args)
{
	char *token = strtok(buff, " \t\n");
	int argc = 0;

	if (strcmp(args[0], "exit") == 0)
	{
		_exit(1);
	}
	while (token != NULL)
	{
		args[argc] = token;
		token = strtok(NULL, " \t\n");
		argc++;
	}

	args[argc] = NULL;

	return (argc);
}
