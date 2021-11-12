/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:45:09 by jforner           #+#    #+#             */
/*   Updated: 2021/07/10 14:53:35 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_test_char03(int x, int y, int i, int j);

void	rush03(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			ft_test_char03(x, y, i, j);
			j++;
		}
		i++;
		j = 1;
		ft_putchar('\n');
	}
}

void	ft_test_char03(int x, int y, int i, int j)
{
	if (j == 1 && (i == 1 || i == y))
	{
		ft_putchar('A');
	}
	else if (j == x && (i == 1 || i == y))
	{
		ft_putchar('C');
	}
	else if ((i == 1 || i == y) || (j == 1 || j == x))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
