#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 0;
	char *buf = NULL;
	ssize_t read;
	
	while (1)
	{
	printf("$ ");
	fflush(stdout);

	read = getline(&buf, &n, stdin);
	if (read != -1)
	{
	if (read > 0 && buf[read -1] == '\n')
	{
		buf[read - 1] == '\0';
	}
	}
	else
	{
	break;
	}
	}
	free(buf);
	return (0);
}
