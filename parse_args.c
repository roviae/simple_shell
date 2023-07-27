#include "main.h"

/**
 * parse_args - parses args
 * @buff: is pointer to buff
 * @args: double pointer to args
 *
 * Return: number of args parsed
 */
int parse-agrs(char *buff, char **args)
{
	char *token = strtok(buff, char **args)
		int argc = 0;

	while (token != NULL)
	{
		args[argc] = token;
		token = strtok(NULL, " \t\n");
		argc++;
	}
	args[argc] = NULL;

	return  (argc);
}
