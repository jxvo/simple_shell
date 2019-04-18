#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints all arguments it
 * receives
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	i = 0;
	while (*argv)
	{
		printf("%s\n", argv[i]);
		i++;
		argv++;
	}
	return (0);
}
