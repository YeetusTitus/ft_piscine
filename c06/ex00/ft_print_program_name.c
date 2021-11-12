/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:48:11 by jforner           #+#    #+#             */
/*   Updated: 2021/07/20 15:09:37 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	display_str(char *str)
{
	char	*display_str;

	display_str = str;
	while (*display_str)
	{
		write(1, display_str, 1);
		display_str++;
	}
}

int	main(int argc, char **argv)
{
	display_str(argv[0]);
	write(1, "\n", 1);
	return (argc * 0);
}
