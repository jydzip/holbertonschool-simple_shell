#include "shell.h"

void execute_cmd(char **tokens, char **env, char *name_execute) {
    int status;
    pid_t child_pid;
    char *cmd;

    if (tokens[0][0] == '/')
        cmd = tokens[0];
    else
        cmd = get_path(env, tokens[0]);

    if (!cmd) {
        fprintf(stderr, "%s: No such file or directory\n", name_execute);
        return;
    }

    child_pid = fork();
    tokens[0] = cmd;

    if (child_pid == -1) {
        fprintf(stderr, "Error: Fork failed\n");
        free(cmd);
        exit(EXIT_FAILURE);
    } else if (child_pid > 0) {
        waitpid(child_pid, &status, 0);
        free(cmd);
    } else {
        execve(tokens[0], tokens, NULL);
        fprintf(stderr, "Error: execve failed\n");
        free(cmd);
        exit(EXIT_FAILURE);
    }
}
