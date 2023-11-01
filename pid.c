#include <stdio.h>
#include <unistd.h>
int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();
	printf("My pid is %u\n", pid);
	printf("My ppid is %u\n", ppid);
	return (0);
}
