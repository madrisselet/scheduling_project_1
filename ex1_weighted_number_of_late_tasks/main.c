
#include <stdio.h>	/* printf */
#include "main.h"	/* struct TASK, MAX_LINE_LENGTH */

int main(int argc, char **argv)
{
	unsigned int			n = 	0;		/* number of tasks */
	struct TASK 			*task =	NULL;	/* array of tasks */
	unsigned long long int	w_max =	0;		/* maximum weight */

	if (argc > 1)
	{
		load_data(argv[1], &n, &task, &w_max);
		printf("Data file %s loaded; n: %u; w_max: %llu.\n", argv[1], n, w_max);
	}
	else
	{
		printf("Please specify a data file as first argument.\n");
	}

	return (0);
}

