#ifndef SHELL_H
#define SHELL_H

#include<sys/types.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<errno.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>


#define Bound " \t\n"

extern char **environ;


/*==========Functions prototypes==========*/
char *read_line(void);
char **divider(char *line);
void free_array_of_strings(char **arr);
int _execute(char **cmd, char *input);

/*==========Strings prototypes==========*/
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);

#endif /* SHELL_H */