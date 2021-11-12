/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:02:43 by jforner           #+#    #+#             */
/*   Updated: 2021/07/26 21:08:59 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"
int	main(int argv, char **argc)
{
	int	i;

	if (argv == 1 || (argv == 3 && argc[1] == "-c" && ft_str_is_num(argc[2])))
	{
		ft_write_stdin();
		return (1);
	}
	i = 1;
	if (argv == 3 && argc[1] == "-c" && ft_str_is_num(argc[2]))
		i = 3;
	while (argc[i])
	{
		if (ft_read_file(argc[i]))
			return (0);
		i++;
	}
	return (1);
}
