#include "shell.h"

void execute_cmd(char **tokens, char **env, char *name_execute) {
	int status;
	pid_t child_pid;
	char *cmd;

	if (tokens[0][0] == '/')
		cmd = strdup(tokens[0]);
	else
		cmd = get_path(env, tokens[0]);

	if (!cmd)
	{
		fprintf(stderr, "%s: 1: %s: not found\n", name_execute, tokens[0]);
		return;
	}

	child_pid = fork();
	tokens[0] = cmd;

	if (child_pid == -1)
	{
		free(cmd);
		fprintf(stderr, "Error: Fork failed\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
		execve(tokens[0], tokens, env);

	if (waitpid(child_pid, &status, 0) == -1)
	{
		free(cmd);
		fprintf(stderr, "Error: waitpid failed\n");
		exit(EXIT_FAILURE);
	}
	free(cmd);
}
