#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

char *get_path(char **env, const char *cmd_name);
char *get_path_already_absolute(const char *cmd_name);
char *read_line();
char **split_line(char *line);
int execute_cmd(char **tokens, char **env);
int initialize_cmd(char *line, char **env, char *name_execute, int cmd_count);
void print_environment(char **env);
#endif
