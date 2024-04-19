#include "shell.h"


/**
 * main - Start program
 * @argc: Number of arguments
 * @argv: List of arguments
 * @env: List environnement variables
 */
int main(int argc, char **argv, char **env)
{
	(void)argc;
	char *name_execute = argv[0];

	if (isatty(STDIN_FILENO))
		interactive_shell(name_execute, env);
	else
		non_interactive_shell(name_execute, env);
	return (0);
}


void non_interactive_shell(char *name_execute, char **env)
{
	char buffer[32];
	char *line = buffer;
	size_t linesize = 32;
	char **tokens;

	if (getline(&line, &linesize, stdin) == -1) {
		return;
	}

	tokens = split_line(line);
	execute_cmd(tokens, env, name_execute);
	free(tokens);
}

void interactive_shell(char *name_execute, char **env)
{
	char buffer[32];
	char *line = buffer;
	size_t linesize = 32;
	char **tokens;

	while (1)
	{
		printf("$ ");
		fflush(stdout);

		if (getline(&line, &linesize, stdin) == -1) {
			break;
		}

		tokens = split_line(line);
		execute_cmd(tokens, env, name_execute);
		free(tokens);
	}
}
