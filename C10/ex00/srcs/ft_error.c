/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:01:45 by jforner           #+#    #+#             */
/*   Updated: 2021/07/22 16:45:16 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"
int	ft_error_args(int argv)
{
	if (argv == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argv > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}
