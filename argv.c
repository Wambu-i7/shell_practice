#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = 1;
	while (argv[i] != NULL)
	{
	printf("Argv is %d: %s\n", i, argv[i]);
	i++;
	}
	return (0);
}


