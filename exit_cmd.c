#include "shell.h"

/**
* exit_cmd - It handles the exit command,
* @command: It tokenized the command,
* @line: The input read from standard input,
*
* Return: nothing will return.
*/
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}

