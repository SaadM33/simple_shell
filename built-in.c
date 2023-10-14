#include "shell.h"

/**
 * exit_built_in - Exit The Shell
 * @cmd: Parsed Command
 * @input: User Input from getline
 * Return: Void (Exit Statue)
 */
void  exit_built_in(char **cmd, char *input)
{
    int statue, i = 0;

    if (cmd[1] == NULL)
    {
		  free(input);
		  free(cmd);
		  exit(EXIT_SUCCESS);
    }
    else
		{
			statue = _atoi(cmd[1]);
			free(input);
			free(cmd);
			exit(statue);
		}
}

/**
 * env_built_in - Display Enviroment Variables
 * Return:Always 0
 */
int  env_built_in(void)
{
  int i;
	int len;

	for (i = 0; environ[i] != NULL; i++)
	{
	  WRITE(environ[i]);
    WRITE("\n");
	}
	return (0);
}
