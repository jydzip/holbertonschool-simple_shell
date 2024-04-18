#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"
char **split_line(char *line) {
	char **words = NULL;
	int word_count = 0;
	const char *delimiter = " ";
	char *token = strtok(line, delimiter);

	words = malloc(32 * sizeof(char *));
	if (words == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
                exit(EXIT_FAILURE);
	}

	while (token != NULL) {
		worlds[word_count] = token;
		word_count++;
		token = strtok(NULL, delimiter);
	}
	words[word_count] = NULL;
	return (words);
}
