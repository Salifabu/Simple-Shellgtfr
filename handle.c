#include "shell.h"

/**
 *handle_signal- it interacr  mode to keeps track,
 *@m: The signal number,
 *Return: Nothing to be returned.
 */

void handle_signal(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}

