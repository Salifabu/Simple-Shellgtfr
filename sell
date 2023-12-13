#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdlib.h>






/**
 * struct mybuild - pointer to function with corresponding buildin command
 * @name: buildin command
 * @func: execute_cmd the buildin command
 */
typedef struct mybuild
{
	char *name;
	void (*func)(char **);
} mybuild;

void(*checkbuild(char **arv))(char **arv);
int _atoi(char *s);
void exits(char **arv);
void env(char **arv);
void _setenv(char **arv);
void _unsetenv(char **arv);

void free_arv(char **arv);
char **sep_string(char *str, const char *delim);
void execute_cmd(char **argv);
void *_realloc(void *ptr, unsigned int old_size_p, unsigned int new_size);


extern char **environ;

/**
 *  * struct lists_p - Linked list containing PATH directories
 *   * @dir: directory in path
 *    * @p: pointer to next node
 *     */
typedef struct lists_p
{
		char *dir;
			struct lists_p *p;
} lists_p;


char *_getenv(const char *name);
lists_p *add_node_end(lists_p **head, char *str);
lists_p *linkpath(char *path);
char *_which(char *filename, lists_p *head);

void free_list(lists_p *head);



int _put_char(char c);
void _pchar(char *str);
int _strlen(char *s);
char *_strdup(char *str);
char *_concatenate(char *name, char *sep, char *fvalue);






#endif
