/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycasse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:44:01 by ycasse            #+#    #+#             */
/*   Updated: 2021/07/10 14:33:40 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_test_char00(int x, int y, int i, int j);

void	rush00(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			ft_test_char00(x, y, i, j);
			j++;
		}
		i++;
		j = 1;
		ft_putchar('\n');
	}
}

void	ft_test_char00(int x, int y, int i, int j)
{
	if ((i == 1 || i == y) && (j == 1 || j == x))
	{
		ft_putchar('o');
	}
	else if (i == 1 || i == y)
	{
		ft_putchar('-');
	}
	else if (j == 1 || j == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
