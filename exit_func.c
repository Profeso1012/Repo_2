#include "main.h"
/**
 * exit_1 - exit with a value of 1;
 * @value: the integer to exit 1 on failure and
 * 0 on success
 * @pointer: pointer to the array containing the command.
 */
void exit_1(int value, char *pointer)
{
	free(pointer);
	exit(value);
}
