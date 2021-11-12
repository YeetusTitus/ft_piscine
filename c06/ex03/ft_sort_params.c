/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 13:23:32 by jforner           #+#    #+#             */
/*   Updated: 2021/07/19 19:24:15 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	create_order(int *order, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		order[i] = i;
		i++;
	}
}

void	display_str(char **str, int max, int *order)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < max)
	{
		j = 0;
		while (str[order[i]][j])
		{
			write(1, &str[order[i]][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	sort_input(char **str, int max)
{
	int	test;
	int	i;
	int	order[255];
	int	c;

	create_order(order, max);
	test = 0;
	while (test == 0)
	{
		test = 1;
		i = 1;
		while (i < max)
		{
			if (ft_strcmp(str[order[i]], str[order[i + 1]]) > 0 && str[i + 1])
			{
				c = order[i];
				order[i] = order[i + 1];
				order[i + 1] = c ;
				test = 0;
			}
			i++;
		}
	}
	display_str(str, max, order);
}

int	main(int argc, char **argv)
{
	sort_input(argv, argc);
	return (0);
}
