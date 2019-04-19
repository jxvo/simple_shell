#include "shell.h"

/**
 * _getpath - This functions finds and return the PATH
 * variable for the global environment vector
 *
 * Return: PATH, if found, or NULL
 */

char *_getpath(void)
{
	int i, a;
	char **env = environ;
	char *path;

	while (*env)
	{
		if (strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && i < 5)
			{
				path++;
				i++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}

/* This function is almost set. It needs a non-standard copy of strncmp and */
/*   removal of the print statement, once we're confident we're done with it.*/
