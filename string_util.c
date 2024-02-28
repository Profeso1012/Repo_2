#include <stdio.h>
/**
 * _strspn - imitates the strspn function
 * @s: pointer to str passed
 * @accept: char to be counted
 * Return: number of @accept counted
 */
size_t _strspn(const char *s, const char *accept)
{
	size_t i = 0;
	int j;

	while (s[i] != '\0')
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		i++;
	}
	return (i);
}

/**
 * _strlen - counts number of chars in a str
 * @s: str passed
 *
 * Return: length of str passed
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
