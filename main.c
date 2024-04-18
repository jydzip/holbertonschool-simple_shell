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
	char *line;
	char **args;
	char *name_execute = argv[0];

	while (1)
	{
		printf("$ ");
		fflush(stdout);

		line = read_line();
		args = split_line(line);
		execute_cmd(args, env, name_execute);
	}
	return (0);
}
