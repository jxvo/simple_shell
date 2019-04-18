#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - This program splits a string and prints
 * its parts
 *
 * Return: 0
 */

int main()
{
	char *line = NULL;
	char *copystr = NULL;
	char *ptr = NULL;
	size_t size = 120;
	char *arr[] = {""};
	char delim[] = {" "};
	int i;


	printf("$ ");
	if (getline(&line, &size, stdin) ==  -1)
	{
		return (-1);
	}
	copystr = strdup(line);
	free(line);

	/* Uncomment printf to view copystr:
	   printf("%s\n", copystr);*/

	ptr = strtok(copystr, delim);
	*(arr + 0) = ptr;
        /* Uncomment printf to view arr[0] value:
	   printf("arr[0] is: %s\n", arr[0]);*/

	i = 1;
	while(ptr != NULL)
	{
		ptr = strtok(NULL, delim);
		arr[i] = ptr;
		/* Uncomment printf to view arr[i] values:
		   printf("arr[%d] is: %s\n", i, arr[i]);*/
		i++;
	}
	printf("%s\n", copystr);
	printf("%s\n", line);

	free(copystr);
	return (0);
}
