/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberquer <tberquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:30:46 by tberquer          #+#    #+#             */
/*   Updated: 2019/08/22 18:49:24 by tberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

int display_error()
{
	write(1, "Error\n", 6);
	return (0);
}

t_view char_to_view(char *str, int index)
{
	t_view view;

	return view;
}

t_view *char_to_view_tab(char *str)
{
	t_view **tab;
	int index;
	int	sub_index;

	if (tab = malloc(sizeof(*tab) * 5))
		return (NULL);
	index = 0;
	sub_index = 0;
	while (index < 4)
	{

		if (tab = malloc(sizeof(*tab) * 5))
			return (NULL);
		sub_index = 0;
		while(sub_index < 4)
		{
			tab[index] = char_to_view(str, index, sub_index);
			sub_index++;
		}
		index++
	}
	tab[index] = '\0';
	return (tab);
}

int main(int argc, char **argv)
{
	t_view *tab;	
	if (argc != 2)
		return (display_error());
	if (1 == 1)
		tab = char_to_view_tab(argv[1]);
	return 0;
}