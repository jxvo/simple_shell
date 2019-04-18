#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - This program operates as a simple shell
 * @argc: the number of command line arguments
 * @argv: pointer to an array of command line
 * arguments
 *
 *
 * Return: Always 0
 *
 */

int main (int argc, char **argv, char **envp)
{
	char *buffer;
	size_t bufsize = 0;
	pid_t newProcess;
	ssize_t charCount;
	int status;

	if (argc < 1)
		return (-1);
	while (1)
	{
		write(STDERR_FILENO, "$ ", 2);
		charCount = getline(&buffer, &bufsize, stdin);
		if (charCount < 0)
			break;
		if (buffer[charCount - 1] == '\n')
			buffer[charCount - 1]  = '\0';
		newProcess = fork();
		if (newProcess < 0)
			perror(argv[0]);
		if (newProcess == 0)
		{
			execve(buffer, argv, envp);
			perror(argv[0]);
		}
		else
			wait(&status);
	}
	if (charCount <= 0)
		write(STDERR_FILENO, "\n", 1);
	free(buffer);
	return (0);
}
