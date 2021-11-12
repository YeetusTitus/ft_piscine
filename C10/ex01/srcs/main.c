/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:02:43 by jforner           #+#    #+#             */
/*   Updated: 2021/07/27 19:36:02 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"
int	main(int argv, char **argc)
{
	int	i;

	if (argv == 1)
	{
		ft_write_stdin(argc);
		return (1);
	}
	i = 1;
	while (argc[i])
	{
		if (ft_read_file(argc[i]))
			return (0);
		i++;
	}
	return (1);
}
