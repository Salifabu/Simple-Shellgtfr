#include "shell.h"
/**
 *checker- It will search if  built in function,
 *@cmd: It will tokenized user input,
 *@buf: it derived from getline function,
 *Return: It return 1 if cmd executed or 0 if cmd is not executed.
 */
int checker(char **cmd, char *buf)
{
	if (handle_builtin(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}

