/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:27:43 by jforner           #+#    #+#             */
/*   Updated: 2021/07/27 14:39:39 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"
void ft_error(char **argv, int i)
{
    ft_puterror(argv[0]);
    ft_puterror(": ");
    ft_puterror(argv[i]);
    ft_puterror(": ");
    ft_puterror(strerror(errno));
}