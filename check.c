/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbedouet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:30:46 by tbedouet          #+#    #+#             */
/*   Updated: 2019/08/22 20:00:22 by tbedouet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

int is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int check_possible(char *arg)
{
	int i,j;

	i = 0;
	j = 0;
	while (j < 10)
	{
		while (i <= 6)
		{
			if ((arg[j + i] - '0') + (arg[j + i + 8] - '0') > 5 
					|| (arg[j + i] - '0') + (arg[j + i + 8] - '0') < 3)
				return (0);
			i += 2;
		}
		j += 8;
	}
	return (1);
}

int check(char *arg)
{
	int i;
	int nmbr;
	int space;

	nmbr = 0;
	space = 0;
	i = 0;
	if (!(arg[i] < '5' && arg[i] > '0'))
		return (display_error());
	while (arg[i])
	{
		if (is_space(arg[i]))
			++space;
		else if (arg[i] < '5' && arg[i] > '0')
		{
			if ( !(is_space(arg[i + 1])) && !(arg[i + 1] == 0))
				return (display_error());
			++nmbr;
		}
		else
			return (display_error());
		++i;
	}
	if (nmbr != 16 || space != 15)
		return (display_error());
	if(!check_possible(arg))
		return (display_error());
	return (1);
}
