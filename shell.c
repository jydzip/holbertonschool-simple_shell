#include "shell.h"


/**
 * execute_cmd - Execute a command
 * @tokens: List of args to the command
 * @env: The environment variables
 * Return: Status, 1 continue the shell, 0 stop the shell
 */
int execute_cmd(char **tokens, char **env)
{
	int status;
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		fprintf(stderr, "Error: fork failed\n");
		return (0);
	}
	if (child_pid == 0)
	{
		if (execve(tokens[0], tokens, env) == -1)
		{
			fprintf(stderr, "Error: execve failed\n");
			return (0);
		}
	}

	if (waitpid(child_pid, &status, 0) == -1)
	{
		fprintf(stderr, "Error: waitpid failed\n");
		return (0);
	}
	return (1);
}


/**
 * initialize_cmd - Initialize a command shell
 * @line: The command line entered by the user
 * @env: The environment variables
 * @name_execute: The name of the executable file
 * @cmd_count: The number of commands executed so far
 * Return: Status, 1 continue the shell, 0 stop the shell
 */
int initialize_cmd(char *line, char **env, char *name_execute, int cmd_count)
{
	int status_execute;
	char *cmd = NULL;
	char **tokens = NULL;

	tokens = split_line(line);
	if (tokens == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed\n");
		return (0);
	}
	else if (tokens[0] == NULL)
	{
		free(tokens);
		return (1);
	}

	cmd = get_path(env, tokens[0]);

	if (cmd == NULL)
	{
		fprintf(stderr, "%s: %d: %s: not found\n",
				name_execute, cmd_count, tokens[0]);
		free(tokens);
		return (1);
	}

	tokens[0] = cmd;

	status_execute = execute_cmd(tokens, env);

	free(tokens);
	free(cmd);
	return (status_execute);
}
