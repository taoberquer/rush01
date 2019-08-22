#include "fcts.h"

static int is_valid_tower(t_view **tab, int line, int col)
{
	return (1);
}

int tower_finder(t_view **tab, int line, int col)
{
	if (col == 3 && line == 3 && is_valid_tower(tab[line][col].value))
		return (1);
	if (tab[line][col].value + 1 > 4)
		return (0);
	while (++tab[line][col].value < 5)
	{
		if (is_valid_tower(tab[line][col].value))
		{
			if (col < 2)
				if (tower_finder(tab, line, col + 1))
					return (1);
			else if (tower_finder(tab, line + 1, 0))
					return (1);
		}
	}
	tab[line][col].value = 0;
	return (0);
}