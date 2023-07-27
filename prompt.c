#include "main.h"
/**
 * prompt - prints a prompt to stdout
 *
 * Return: void
*/
void prompt(void)
{
	if (isatty(fileno(stdin)))
	{
		printf(">>> ");
		fflush(stdout);
	}
}
