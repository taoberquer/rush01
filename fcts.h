#ifndef FCTS_H

# define FCTS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_view
{
	int		top;
	int		bottom;
	int		left;
	int		right;
	int		value;
}				t_view;

int check(char *arg);
int display_error();
void 	display(t_view **tab);
int tower_finder(t_view **tab, int line, int col);

#endif
