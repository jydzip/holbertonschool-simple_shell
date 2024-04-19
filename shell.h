#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
char *get_path(char **env, const char *cmd_name);
void interactive_shell(char *name_execute, char **env);
void non_interactive_shell(char *name_execute, char **env);

char *read_line();
char **split_line(char *line);
void execute_cmd(char **tokens, char **env, char *name_execute);
void print_environment(char **env);
#endif
