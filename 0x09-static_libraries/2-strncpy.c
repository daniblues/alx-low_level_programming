#include "main.h"
/**
 * _strncpy - Entry function
 * @dest: pointer to char dest
 * @src: pointer to char src
 * @n: number of src to copy to dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

