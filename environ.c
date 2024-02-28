#include "main.h"
/**
 * disp_env - prints the env variables
 * @env: pointer to vars
 *
 * Return: nothing
 */
void disp_env(char **env)
{
	int i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
}
