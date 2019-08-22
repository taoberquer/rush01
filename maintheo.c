/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintheo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbedouet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:53:03 by tbedouet          #+#    #+#             */
/*   Updated: 2019/08/22 18:58:18 by tbedouet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"
#include <stdio.h>

int display_error()
{
	write(1, "Error\n", 6);
	return (0);
}

int main(int ac, char **av)
{
	++ac;
	printf("%d", check(av[1]));
}
