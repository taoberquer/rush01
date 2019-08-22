#include "fcts.h"

static int is_valid_tower(t_view **tab, int line, int col)
{
	int index;
	int count;
	int max;

	index = 0;
	count = 0;
	max = 0;
	while (index < 4)
	{
		if (max < tab[index][col].value)
		{
			max = tab[index][col].value;
			count++;
		}
		index++;
	}
	if (count > tab[index][col].top)
		return (0);
	index = 3;
	count = 0;
	max = 0;
	while (index >= 0)
	{
		if (max < tab[index][col].value)
		{
			max = tab[index][col].value;
			count++;
		}
		index--;
	}
	if (count > tab[index][col].bottom)
		return (0);
	index = 0;
	count = 0;
	max = 0;
	while (index < 4)
	{
		if (max < tab[line][index].value)
		{
			max = tab[line][index].value;
			count++;
		}
		index++;
	}
	if (count > tab[line][index].left)
		return (0);
	index = 3;
	count = 0;
	max = 0;
	while (index >= 0)
	{
		if (max < tab[line][index].value)
		{
			max = tab[line][index].value;
			count++;
		}
		index--;
	}
	if (count > tab[line][index].right)
		return (0);
	return (1);
}

int tower_finder(t_view **tab, int line, int col)
{
	if (col == 3 && line == 3 && is_valid_tower(tab, line, col))
		return (1);
	if (tab[line][col].value + 1 > 4)
		return (0);
	while (++tab[line][col].value < 5)
	{
		if (is_valid_tower(tab, line, col))
		{
			if (col < 2)
			{
				if (tower_finder(tab, line, col + 1))
					return (1);
			}
			else if (tower_finder(tab, line + 1, 0))
					return (1);
		}
	}
	tab[line][col].value = 0;
	return (0);
}