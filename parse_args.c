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
	int argc = 0, i = 0;

	while (token != NULL)
	{
		if (strcmp(args[0], "env") == 0)
		{
			while (environ[i] != NULL)
			{
				printf("%s\n", environ[i]);
				i++;
			}
		}
		args[argc] = token;
		token = strtok(NULL, " \t\n");
		argc++;
	}

	args[argc] = NULL;

	return (argc);
}
