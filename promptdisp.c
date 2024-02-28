#include "main.h"
/**
 * get_cmd_prompt - displays prompt to collect input
 *
 * Return: always success
 */

void get_cmd_prompt(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		write(1, "$ ", 2);
	}
}
