#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
char *get_path(char **env, const char *cmd_name);

char *read_line();
char **split_line(char *line);
int execute_cmd(char *line, char **env, char *name_execute, int cmd_count);
void print_environment(char **env);
void ctrl_Z_handler();
#endif
