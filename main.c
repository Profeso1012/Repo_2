#include "main.h"
/**
 * main - entry point of shell codde
 * @argc: number of args
 * @argv: array of args passed
 * @env: environment variables found
 * Return: 0 on sucess, otherwise errno value
 */
int main(int argc, char **argv, char **env)
{
	char *line;
	(void)argc;
	(void)argv;

	while (1)
	{
		get_cmd_prompt();
		line = get_line();
		if (line == NULL)
		{
		free_line(line);
		break;
		}
		if (process_command(line, env) == 1)
		{
		break;
		}
		free_line(line);
	}
	return (0);
}
