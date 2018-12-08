#ifndef __MAIN_H__
# define __MAIN_H__

struct TASK
{
	unsigned int			id;	/* between 1 and n */
	unsigned int			p;	/* processing time */
	unsigned long long int	w;	/* weight */
	unsigned int			d;	/* due date */
};

/* question 1 */
void load_data(char const filename[], unsigned int *n, struct TASK **task, unsigned long long *w_max);

/* question 2 */
void display_data(unsigned int n, struct TASK const *task, unsigned long long w_max);

/* question 3 */
unsigned int Moore(unsigned int n, struct TASK *task);

/* question 4 */
unsigned long long compute_WI(unsigned int n, struct TASK *task);

/* question 5 */
void populate_table(unsigned int n, unsigned long long WI, struct TASK *task, unsigned int ***P);

/* question 6 */
void find_sol(unsigned int n, unsigned long long WI, struct TASK *task, unsigned int **P);

#endif /* __MAIN_H__ */


