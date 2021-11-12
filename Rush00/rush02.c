/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycasse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:09:44 by ycasse            #+#    #+#             */
/*   Updated: 2021/07/10 14:33:29 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_test_char02(int x, int y, int i, int j);

void	rush02(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			ft_test_char02(x, y, i, j);
			j++;
		}
		i++;
		j = 1;
		ft_putchar('\n');
	}
}

void	ft_test_char02(int x, int y, int i, int j)
{
	if (i == 1 && (j == 1 || j == x))
	{
		ft_putchar('A');
	}
	else if (i == y && (j == 1 || j == x))
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
