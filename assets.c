#include"shell.h"
/**
 * _itoa - Convert Integer To Char
 * @n: Int To Convert
 * Return: Char Pointer
 */
char *_itoa(unsigned int n)
{
	int len = 0, i = 0;
	char *s;
	int start = 0;
	int end = len - 1;

	/*Calculate the length of the integer*/
	if (n == 0)
	{
		len = 1;
	}
	else
	{
		unsigned int temp = n;

		while (temp > 0)
		{
			temp /= 10;
			len++;
		}
	}
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	/*Convert the integer to a string*/
	while (i < len)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	/* Reverse the string*/
	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
	return (s);
}
