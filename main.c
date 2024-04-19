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

		if (strcmp(tokens[0], "exit") == 0)
		{
			free(tokens);
			break;
		}

		else if (strcmp(tokens[0], "env") == 0)
		{
			print_environment(env);
		}
		else
		{
			execute_cmd(tokens, env, name_execute);
		}
		free(tokens);
	}
}
