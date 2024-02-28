#include "main.h"
/**
 * get_line - custom getline function and more
 *
 * Return: pointer to line read
 */
char *get_line(void)
{
	size_t num_bytes = 0;
	char *array = NULL;

	while (getline(&array, &num_bytes, stdin) == -1)
	{
	}
	if (array[0] == '\n')
	{
		free_line(array);
		return (NULL);
	}
	array[strcspn(array, "\n")] = '\0';
	return (array);
}

/**
 * free_line - frees memory explicitly
 * @line: memory to be freed
 *
 * Return: nothing
 */
void free_line(char *line)
{
	if (line != NULL)
	{
		free(line);
	}
}

