#include "main.h"

/**
 * get_sigint - handle the crtl + c call in prompt
 *
 * @sig: Signal handler
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5); /* write to standard output ^C */
}
