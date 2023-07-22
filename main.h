#ifndef MAIN_H
#define MAIN_H

extern char **environ;

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#define SIZE 60

void prompt(void);
int parse_args(char *buff, char **args);
void exec_cmd(char **args);
void run_shell(void);

#endif
