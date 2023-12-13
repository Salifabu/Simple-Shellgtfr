
#include "shell.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * _realloc - Reallocates mem block
 * @ptr: previous ptr
 * @old_size_p: old size of previous ptr
 * @new_size: new size for our ptr
 * Return: New resized Pointer
 */

void *_realloc(void *ptr, unsigned int old_size_p, unsigned int new_size)
{
	char *new;
	char *old;

	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size_p)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	old = ptr;
	if (new == NULL)
		return (NULL);

	if (new_size > old_size_p)
	{
		for (i = 0; i < old_size_p; i++)
			new[i] = old[i];
		free(ptr);
		for (i = old_size_p; i < new_size; i++)
			new[i] = '\0';
	}
	if (new_size < old_size_p)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
		free(ptr);
	}
	return (new);
}

/**
 * free_arv - to frees d array of pointers arv
 *@arv: array of pointers or pointer
 */

void free_arv(char **arv)
{
	int i;

	for (i = 0; arv[i]; i++)
		free(arv[i]);
	free(arv);
}


