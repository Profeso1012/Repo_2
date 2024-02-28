#include "main.h"
/**
 * process_command - handles the execution of cmd
 * @line: command arg from stdin
 * @env: environment variables found
 * Return: 1 on error, 0 on success
 */
int process_command(char *line, char **env)
{
	char *args[MAX_ARGS];
	int i = 0, pid;

	args[i] = strtok(line, " ");
	while (args[i] != NULL && i + 1 < MAX_ARGS)
	{
		i++;
		args[i] = strtok(NULL, " ");
	}
	args[i] = NULL;
	if (strcmp(args[0], "exit") == 0)
		exit(0);
	else if (strcmp(args[0], "env") == 0)
	{
		disp_env(env);
		return (0);
	}
	else
	{
		if (path_finder(&args[0]) == 1)
		{
			pid = fork();
			if (pid == 0)
				execve(args[0], args, env);
			else if (pid > 0)
				wait(NULL);
			else
			{
				perror("fork");
				return (1);
			}
		}
		return (0);
	}
}
