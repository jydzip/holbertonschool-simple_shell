#include "shell.h"

void execute_cmd(char **tokens, char **env, char *name_execute) {
	int status;
	pid_t child_pid;
	char *cmd;
	int direct_method = 0;

	if (tokens[0][0] == '/')
	{
		direct_method = 1;
		cmd = tokens[0];
	}
	else
		cmd = get_path(env, tokens[0]);

	if (!cmd) {
		fprintf(stderr, "%s: 1: %s: not found\n", name_execute, tokens[0]);
		return;
	}

	child_pid = fork();
	tokens[0] = cmd;

	if (child_pid == -1) {
		fprintf(stderr, "Error: Fork failed\n");
		if (direct_method == 0)
			free(cmd);
		exit(EXIT_FAILURE);
	} else if (child_pid > 0) {
		waitpid(child_pid, &status, 0);
		if (direct_method == 0)
			free(cmd);
	} else {
		execve(tokens[0], tokens, NULL);
		fprintf(stderr, "Error: execve failed\n");
		if (direct_method == 0)
			free(cmd);
		exit(EXIT_FAILURE);
	}
}
