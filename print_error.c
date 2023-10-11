#include "shell.h"

/**
 * print_error - Display Error message Based on Command and How the Times the Shell Looped
 * @input:user Input
 * @counter:SimpleShell Count Loop
 * @argv:Program Name
 * Return: Void
 */
void print_error(char *input, int counter, char **argv)
{
	char *ernum;

	WRITE(argv[0]);
	WRITE(": ");
	ernum = _itoa(counter);
	WRITE(ernum);
	free(ernum);
	WRITE(": ");
	WRITE(input);
	WRITE(": not found\n");
}
