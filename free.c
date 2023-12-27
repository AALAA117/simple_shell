#include "shell.h"
/**
 * free - free memory
 * @buff: ..
 * Return: nothing
 */
void free_mem(char **buff)
{
	if (*buff != NULL)
	{
		free(*buff);
		*buff = NULL;
	}
	exit(EXIT_SUCCESS);
}
