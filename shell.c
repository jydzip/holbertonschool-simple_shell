#include "shell.h"

int execute_cmd(char *line, char **env, char *name_execute, int cmd_count) {
	int status;
	pid_t child_pid;
	char *cmd;
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

	if (tokens[0][0] == '/')
		cmd = strdup(tokens[0]);
	else
		cmd = get_path(env, tokens[0]);

	if (cmd == NULL)
	{
		fprintf(stderr, "%s: %d: %s: not found\n", name_execute, cmd_count, tokens[0]);
		free(tokens);
		return (1);
	}

	child_pid = fork();
	tokens[0] = cmd;

	if (child_pid == -1)
	{
		free(tokens);
		free(cmd);
		fprintf(stderr, "Error: fork failed\n");
		return (0);
	}
	if (child_pid == 0)
	{
		if (execve(tokens[0], tokens, env) == -1)
		{
			free(tokens);
			free(cmd);
			fprintf(stderr, "Error: execve failed\n");
			return (0);
		}
	}

	if (waitpid(child_pid, &status, 0) == -1)
	{
		free(tokens);
		free(cmd);
		fprintf(stderr, "Error: waitpid failed\n");
		return (0);
	}

	free(tokens);
	free(cmd);
	return (1);
}
