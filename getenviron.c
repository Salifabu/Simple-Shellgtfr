#include "shell.h"

/**
 * _getenv - gets the fvalue of the global variable
 * @name: name of the global variable
 * Return: string of value
 */
char *_getenv(const char *name)
{
	int i, j;
	char *fvalue;

	if (!name)
	return (NULL);
	for (i = 0; environ[i]; i++)
{
	j = 0;
	if (name[j] == environ[i][j])
{
	while (name[j])
{
	if (name[j] != environ[i][j])
	break;

	j++;
}
	if (name[j] == '\0')
{
	fvalue = (environ[i] + j + 1);
	return (fvalue);
}
}
}
	return (0);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to our linked list
 * @str: pointer to string in previous first node
 * Return: address of the new element/node
 */

lists_p *add_node_end(lists_p **head, char *str)
{

	lists_p *tmp;
	lists_p *new;

	new = malloc(sizeof(lists_p));

	if (!new || !str)
{
	return (NULL);
}

	new->dir = str;

	new->p = '\0';
	if (!*head)
{
	*head = new;
}
	else
{
	tmp = *head;

	while (tmp->p)
{

	tmp = tmp->p;
}

	tmp->p = new;
}
	return (*head);
}

/**
 * linkpath - creates a linked list for path directories
 * @path: string of path value
 * Return: pointer to the created linked list
 */
lists_p *linkpath(char *path)
{
	lists_p *head = '\0';
	char *token;
	char *cpath = _strdup(path);

	token = strtok(cpath, ":");
	while (token)
{
		head = add_node_end(&head, token);
		token = strtok(NULL, ":");
}

	return (head);
}

/**
 * _which - finds the pathname of a filename
 * @filename: name of file or command
 * @head: head of linked list of path directories
 * Return: pathname of filename or NULL if no match
 */
char *_which(char *filename, lists_p *head)
{
	struct stat st;
	char *string;

	lists_p *tmp = head;

	while (tmp)
{

	string = _concatenate(tmp->dir, "/", filename);
	if (stat(string, &st) == 0)
{
	return (string);
}
	free(string);
	tmp = tmp->p;
}

	return (NULL);
}

/**
 * free_list - frees a list_t
 *@head: pointer to our linked list
 */
void free_list(lists_p *head)
{
	lists_p *storage;

	while (head)
{
	storage = head->p;
	free(head->dir);
	free(head);
	head = storage;
}
}
