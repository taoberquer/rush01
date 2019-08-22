/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberquer <tberquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:30:46 by tberquer          #+#    #+#             */
/*   Updated: 2019/08/22 18:32:20 by tberquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

int display_error()
{
	write(1, "Error\n", 6);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (display_error());
	(void) argv;
	return 0;
}