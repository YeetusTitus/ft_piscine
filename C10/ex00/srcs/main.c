/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:02:43 by jforner           #+#    #+#             */
/*   Updated: 2021/07/22 16:43:28 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"
int	main(int argv, char **argc)
{
	if (ft_error_args(argv))
		return (0);
	if (ft_read_file(argc[1]))
		return (0);
	return (1);
}
