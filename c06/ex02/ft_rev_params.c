/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 12:06:07 by jforner           #+#    #+#             */
/*   Updated: 2021/07/20 15:20:25 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	display_str(char **str, int i)
{
	int	j;

	j = 0;
	if (i <= 0)
		return (1);
	while (str[i][j])
	{	
		write(1, &str[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
	if (i > 1)
		return (display_str(str, i - 1));
	return (1);
}

int	main(int argc, char **argv)
{
	display_str(argv, argc - 1);
	return (argc * 0);
}
