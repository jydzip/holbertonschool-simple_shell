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
	char *line;
	char **args;

	while (1)
	{
		printf("$ ");
		fflush(stdout);

		line = getline();
		args = split_line(line);
		execute_cmd(args, env, name_execute);
		free(line);
		free(args);
	}
	return (0);
}
