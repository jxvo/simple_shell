#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *line = NULL;
	size_t size = 64;

	printf("$ ");

	while (getline(&line, &size, stdin) != -1)
	{
		printf("%s", line);
		break;
	}
	free(line);
	return (0);
}
