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
	char *name_execute = argv[0];
	char *line = NULL;
	size_t line_size = 0;
	char **tokens;
	ssize_t line_read = 0;

	(void)argc;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			printf("$ ");
			fflush(stdout);
		}

		line_read = getline(&line, &line_size, stdin);
		if (line_read == -1)
			break;

		tokens = split_line(line);
		if (tokens == NULL || tokens[0] == NULL)
			continue;

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

	free(line);
	return (0);
}
