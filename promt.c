#include "shell.h"

/**
* prompt_user - to prints $ indicat  user to know program is,
* ready to take command.
* prints the prompt when shell interactive mode,
* Return: no return.
*/
void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}

