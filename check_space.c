#include "main.h"
/**
 * check_space - it will check if the command is spaces
 * only without any letters
 * @array: that array is a pointer
 * Return: 1 if the string has no letters and only spaces
 */
int check_space(char *array)
{
	unsigned int i;

	for (i = 0; i < strlen(array) - 1; i++)
	{
		if (array[i] != ' ')
		{
			return (0);
		}
	}
	return (1);
}
