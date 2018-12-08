#include <stdio.h>	/* printf */
#include "main.h"

void load_data(char const filename[], unsigned int *n, struct TASK **task, unsigned long long *w_max)
{
	(void) filename;
	(void) n;
	(void) task;
	(void) w_max;
}

int main(int argc, char **argv)
{
	unsigned int			n = 	0;		/* number of tasks */
	struct TASK 			*task =	NULL;	/* array of tasks */
	unsigned long long int	w_max =	0;		/* maximum weight */

	if (argc > 1)
	{
		load_data(argv[1], &n, &task, &w_max);
		printf("Data file: %s\n. n: %u; w_max: %llu", argv[1], n, w_max);
	}
	else
	{
		printf("Please specify a data file as first argument.\n");
	}

	return (0);
}

