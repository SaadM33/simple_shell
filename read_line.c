#include "shell.h"
/**
 * read_line - read the line
 * Return: line
 */

char *read_line(void)
{

	char *line = NULL;
	size_t length = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO)) /*print the prompt $ only in the interactive mode*/
		write(STDOUT_FILENO, "$ ", 2);

	n = getline(&line, &length, stdin);
	if (n == -1)
	{
		free(line);
		return (NULL);
	}
	free(line);
	return (line);
}

