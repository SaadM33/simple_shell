#include"shell.h"

/**
 * main - Simple Shell main function
 * @ac: Count of arguments
 * @av: Arguments
 * Return: 0 Always (Success)
 */

int main(int ac, char **av)
{

	char *line = NULL;
	char **cmd = NULL;
	int status = 0;
	int counter = 0;
	(void) ac;

	while (1)
	{
		counter++;
		line = read_line();
		if (line == NULL) /*end of file handler Crtl + D*/
		{
			if (isatty(STDIN_FILENO)) /*Print new line only in the interactive mode*/
				write(STDOUT_FILENO, "\n", 1);
			free(line);
			line = NULL;
			return (status);
		}
		cmd = divider(line);
		if (!cmd)
			continue;
		if (_strcmp(cmd[0], "exit") == 0)
		{
			exit_built_in(cmd, line);
		}
		else if (_strcmp(cmd[0], "env") == 0)
		{
			env_built_in();
			continue;
		}
		else
			status = _execute(cmd, line, counter, av);
		free(cmd);
		cmd = NULL;
		free(line);
		line = NULL;
	}
}
