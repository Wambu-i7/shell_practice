#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *line = NULL;
	size_t n = 0;
	ssize_t read;

	printf("Enter a line: ");

	read = getline(&line, &n, stdin);
	if (read == -1)
	{
		printf("Error, couldn't read using getline");
		return (1);
	}
	else
	{
		if (line[read - 1] == '\n')
		{
		line[read - 1] == '\0';
		}
	printf("Characters read from %s is %ld\n", line, read);
	}
	return (0);
}

