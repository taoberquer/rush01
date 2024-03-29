/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberquer <tberquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:30:46 by tberquer          #+#    #+#             */
/*   Updated: 2019/08/22 20:21:04 by tberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

int display_error()
{
	write(1, "Error\n", 6);
	return (0);
}

t_view *char_to_view(char *str, int index, int sub_index)
{
	t_view *view = malloc(sizeof(*view));
	view->top = str[sub_index];
	view->bottom = str[sub_index + 4];
	view->left = str[index + 8];
	view->right = str[index + 12];
	view->value = 0;
	return view;
}

t_view ***char_to_view_tab(char *str)
{
	t_view ***tab;
	t_view **sub_tab;
	int index;
	int	sub_index;

	if (!(tab = malloc(sizeof(*tab) * 4)))
		return (NULL);
	index = 0;
	sub_index = 0;
	while (index < 4)
	{
		if (!(sub_tab = malloc(sizeof(*tab) * 4)))
			return (NULL);
		sub_index = 0;
		while(sub_index < 4)
		{
			sub_tab[index] = char_to_view(str, index, sub_index);
			sub_index++;
		}
		tab[index] = sub_tab;
		index++;
	}
	return (tab);
}

int main(int argc, char **argv)
{
	int index;
	t_view ***tab;	
	if (argc != 2)
		return (display_error());
	if (check(argv[1]))
	{
		if ((tab = char_to_view_tab(argv[1])))
		{
			if (tower_finder(tab, 0, 0))
			{
				display(tab);
			}
			else
			{
				display_error();
			}
		}
		index = -1;
		//while (tab[++index])
		//	free(tab[index]);
		//free(tab);
	}
	return 0;
}
