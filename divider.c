#include"shell.h"

/**
*
*
*/

char **divider(char *line)
{
	char *token = NULL;
	char *tmp = NULL;
	char **cmd = NULL;
	int cpmt = 0, i = 0;


	if (!line)
		return (NULL);

	tmp = _strdup(line);
	token = strtok(tmp, Bound);

	if (token == NULL)
	{
	free(tmp);
	tmp = NULL;
	free(line);
	line = NULL;
	return (NULL);
	}

	while (token)
	{
		cpmt++;
		token = strtok(NULL, Bound);
	}
	free(tmp);
	tmp = NULL;

	cmd = malloc(sizeof(char *) * (cpmt + 1));
	if (!cmd)
	{
		free(line);
		line = NULL;
		return (NULL);
	}
    token = strtok(line, Bound);
	while (token)
	{
		cmd[i] = _strdup(token);
		token = strtok(NULL, Bound);
        i++;
	}
	free(line);
	line = NULL;
	cmd[i] = NULL;
	return (cmd);

}