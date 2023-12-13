#include "shell.h"

/**
* free_buffers - frees buff,
* @buf: The buffer to be freed,
*
* Return: It returns nothing.
*/
void free_buffers(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
}


