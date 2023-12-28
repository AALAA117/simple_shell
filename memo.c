#include "shell.h"
/**
 * memory_handler - free memory
 * @signum: signal
 * Return: nothing
 */
void memory_handler(int signum);
void memory_handler(int __attribute__((unused))signum)
{
	signal(SIGINT, memory_handler);
	write(STDIN_FILENO, "\n$ ", 3);
}
