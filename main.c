#include <stdlib.h>	/* malloc, exit, strtoul, strtoull */
#include <stdio.h>	/* printf, fopen, fgets */
#include "main.h"	/* struct TASK, MAX_LINE_LENGTH */

void load_data(char const filename[], unsigned int *n, struct TASK **task, unsigned long long *w_max)
{
	FILE			*f = NULL;
	unsigned int	i;
	char			line[MAX_LINE_LENGTH];	/* line read from file */
	char			*w_ptr = NULL;			/* pointer to w value in line */
	char			*d_ptr = NULL;			/* pointer to d value in line */

	/* open file */
	f = fopen(filename, "r");
	if (f == NULL)
	{
		printf("Could not open file: %s\n", filename);
		exit(-1);
	}

	/* get number of tasks and alloc memory */
	fgets(line, MAX_LINE_LENGTH, f);	/* read first line from file */
	*n = strtoul(line, NULL, 10);
	*task = malloc((*n) * sizeof(struct TASK));

	/* get all tasks */
	*w_max = 0;
	for (i = 0; i < *n; i++)
	{
		fgets(line, MAX_LINE_LENGTH, f);	/* read line from file */

		(*task)[i].id = i + 1; /* first task is number 1 */

		(*task)[i].p = strtoul(line, &w_ptr, 10);
		(*task)[i].w = strtoull(w_ptr, &d_ptr, 10);
		(*task)[i].d = strtoul(d_ptr, NULL, 10);

		if ((*task)[i].w > *w_max)
			*w_max = (*task)[i].w;
	}
}

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

