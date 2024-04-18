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
	char buffer[32];
	char *line = buffer;
	size_t linesize = 32;
	char **tokens;

	while (1)
	{
		printf("$ ");
		fflush(stdout);

		getline(&line, &linesize, stdin);
		tokens = split_line(line);
		execute_cmd(tokens, env, name_execute);
		free(tokens);
	}
	return (0);
}
