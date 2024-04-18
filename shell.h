#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

char *read_line();
char **split_line(char *line);
void execute_cmd(char **args, char **env, char *name_execute);
#endif
