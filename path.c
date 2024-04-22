#include "shell.h"


char *_getenv(char **env, const char *name) {
        int i = 0;

        while (env[i] != NULL) {
                if (strncmp(env[i], name, strlen(name)) == 0 && (env[i])[strlen(name)] == '=') {
                        return (env[i] + strlen(name) + 1);
                }
                i++;
        }
        return (NULL);
}



char *get_path(char **env, const char *cmd_name)
{
	char *path_copy, *dir, *cmd_path = NULL;
	size_t cmd_path_size = 0;
	char *env_path = _getenv(env, "PATH");

	if (env_path == NULL)
		return (NULL);

	path_copy = strdup(env_path);
	if (!path_copy)
	{
		/* fprintf(stderr, "Unable to allocate buffer\n");
		exit(EXIT_FAILURE);
		*/
		return (NULL);
	}
	dir = strtok(path_copy, ":");

	while (dir != NULL) {
		cmd_path_size = strlen(dir) + strlen(cmd_name) + 2;
		cmd_path = (char *)malloc(cmd_path_size);
		if (cmd_path == NULL)
		{

			/* fprintf(stderr, "Unable to allocate buffer\n");
			exit(EXIT_FAILURE);
			*/
			return (NULL);
		}
		strcpy(cmd_path, dir);
		strcat(cmd_path, "/");
		strcat(cmd_path, cmd_name);

		if (access(cmd_path, X_OK) == 0) {
			free(path_copy);
			return (cmd_path);
		}

		free(cmd_path);
		dir = strtok(NULL, ":");
	}
	free(path_copy);
	return (NULL);
}
