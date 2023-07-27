#include "main.h"
/**
 * run_shell - runs the shell
 * Return: void
*/
void run_shell(void)
{
	char *buff = NULL;
	size_t n = 0;
	ssize_t bytes_read;
	char *args[SIZE];
	int argc, status = 1;

	while (status)
	{
		prompt();
		bytes_read = getline(&buff, &n, stdin);

		if (bytes_read == -1)
		{
			break;
		}
		buff[bytes_read - 1] = '\0';
		argc = parse_args(buff, args);

		if (argc == 0)
		{
			continue;
		}
		exec_cmd(args);
	}

	free(buff);
}
