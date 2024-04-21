#include "shell.h"

char **split_line(char *line) {
	char **words = NULL;
	int word_count = 0;
	const char *delimiter = " \t\n";
	char *token = strtok(line, delimiter);

	words = malloc(128 * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (token != NULL) {
		words[word_count] = token;
		word_count++;
		token = strtok(NULL, delimiter);
	}
	words[word_count] = NULL;
	return (words);
}
