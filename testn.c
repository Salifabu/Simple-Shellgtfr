#include "shell.h"

/**
* test_path - Is to chck if the path is valid,
* @path: It tokenized path,
* @command: cmd entered by the user.
*
* Return:  path appended with command on success
* NULL on failure
*/
char *test_path(char **path, char *command)
{
	int i = 0;
	char *output;

	while (path[i])
	{
		output = append_path(path[i], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		i++;
	}
	return (NULL);
}

