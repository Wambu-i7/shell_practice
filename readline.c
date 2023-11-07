#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * read_line - Reads a line from user input.
 * Returns: Returns the number of characters read.
 */
void tokenization(char *input);
void read_line(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read;

	while (1)
	{
	printf("#cisfun$ ");
	read = getline(&input, &len, stdin);
	if (read != -1)
	{
	tokenization(input);
	}
	if (read > 0 && input[read - 1] == '\n')
	{
		input[read - 1] == '\0';
	}
	else
	{
	(feof(stdin));
	{
	printf("exit\n\n\n\n[Disconnected.....]\n");
	}
	exit(1);
	}
	}
	free(input);
}
