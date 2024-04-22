#include "shell.h"


void print_environment(char **env)
{
	int i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n",env[i]);
		i++;
	}
}

void ctrl_Z_handler() {
    return;
}
void ctrl_C_handler() {
    printf("\n$ ");
    fflush(stdout);
}

/**
 * main - Start program
 * @argc: Number of arguments
 * @argv: List of arguments
 * @env: List environnement variables
 */
int main(int argc, char **argv, char **env)
{
	char *name_execute = argv[0];
	char *line = NULL;
	size_t line_size = 0;
	ssize_t line_read = 0;
	int status = 1;
	int cmd_count = 0;

	(void)argc;

	signal(SIGTSTP, ctrl_Z_handler);
	signal(SIGINT, ctrl_C_handler);

	while (status)
	{
		if (isatty(STDIN_FILENO))
		{
			printf("$ ");
			fflush(stdout);
		}

		line_read = getline(&line, &line_size, stdin);
		if (line_read == EOF)
			break;
		if (line_read > 0 && line[line_read - 1] == '\n')
			line[line_read - 1] = '\0';
		if (line_read == 0)
			continue;

		cmd_count++;

		if (strcmp(line, "exit") == 0)
			break;
		else if (strcmp(line, "env") == 0)
			print_environment(env);
		else
		{
			status = execute_cmd(line, env, name_execute, cmd_count);
			if (status == 0)
				break;
		}
	}

	free(line);
	if (status == 0)
		exit(EXIT_FAILURE);
	return (0);
}
