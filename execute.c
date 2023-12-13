#include "shell.h"

/**
 * execution - it is an executes cmd  entd the users,
 *@cp: The command,
 *@cmd: It  vector arr of ptrs to commands,
 * Return: it return 0. 
 */
void execution(char *cp, char **cmd)
{
	pid_t child_pid;
	int status;
	char **env = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cp);
	if (child_pid == 0)
	{
		execve(cp, cmd, env);
		perror(cp);
		free(cp);
		free_buffers(cmd);
		exit(98);
	}
	else
		wait(&status);
}

