/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:39:39 by jforner           #+#    #+#             */
/*   Updated: 2021/07/23 09:23:25 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"
void	ft_putstr(char *str)
{
	char	*display_str;

	display_str = str;
	while (*display_str)
	{
		write(1, display_str, 1);
		display_str++;
	}
}

void	ft_puterror(char *str)
{
	char	*display_str;

	display_str = str;
	while (*display_str)
	{
		write(2, display_str, 1);
		display_str++;
	}
}
