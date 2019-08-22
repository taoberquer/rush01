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

#endif
