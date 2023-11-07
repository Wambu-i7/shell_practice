#include <stdio.h>
#include <stdlib.h>
#include <string.h>
{
	size_t size = 0;
	char *input = NULL;
	ssize_t read;
	
	while (1)
	{
	printf("$ ");
	fflush(stdout);

	read = getline(&input, &size, stdin);
	if (read != -1)
	{
	if (read > 0 && input[read -1] == '\n')
	{
		input[read - 1] == '\0';
	}
	}
	else
	{
	break;
	}
	}
	free(input);
	return (0);
}
