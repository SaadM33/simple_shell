#include "shell.h"

/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly duplicated string, or NULL if memory
 * allocation fails or if str is NULL.
 */
char *_strdup(const char *str)
{
    char *ptr;
    int i, len = 0;

    if (str == NULL)
        return (NULL);
    while (str[len] != '\0')
    {
        len++;
    }
    ptr = malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return (NULL);
    for (i = 0; i <= len; i++)
        ptr[i] = str[i];
    return (ptr);
}

/**
 * _strcmp - Compare two stringss
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * found, respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
    int cmp;

    cmp = (int)*s1 - (int)*s2;

    while (*s1)
    {
        if (*s1 != *s2)
            break;
        s1++;
        s2++;
        cmp = (int)*s1 - (int)*s2;
    }
    return (cmp);
}

/**
 * _strlen - Calculate the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return (len);
}

/**
 * _strcat - Concatenate two strings
 * @dest: The destination string to which the source is appended
 * @src: The source string to be appended to the destination
 *
 * Return: A pointer to the destination string after the concatenation.
 */
char *_strcat(char *dest, char *src)
{
    char *p = dest;

    while (*p)
        p++;
    while (*src)
    {
        *p = *src;
        p++;
        src++;
    }
    *p = *src;
    return (dest);
}
