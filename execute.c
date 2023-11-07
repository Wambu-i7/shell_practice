#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void execute_command(char *command)
{
	char *args[] = {"/bin/ls", "-l", NULL};
	char *envp[] = {
		"PATH=/usr/local/bin:/usr/bin:/bin",
		"HOME=/home/your_username",
		NULL
	};

	pid_t pid = fork();

	if (pid == -1)
	{
	perror("fork");
	exit(1);
	}
	else if (pid == 0)
	{
	if (execve(args[0], args, envp) == -1)
	{
	perror("./shell");
	exit(1);
	}
	}
	else
	{
        wait(NULL);
	}
}

