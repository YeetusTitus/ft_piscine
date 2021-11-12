/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycasse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:29:41 by ycasse            #+#    #+#             */
/*   Updated: 2021/07/10 14:32:28 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_test_char04(int x, int y, int i, int j);

void	rush04(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			ft_test_char04(x, y, i, j);
			j++;
		}
		i++;
		j = 1;
		ft_putchar('\n');
	}
}

void	ft_test_char04(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == y && j == x))
	{
		if (((y == 1 && j == x) && x != 1 ) || ((x == 1 && i == y) && y != 1))
		{
			ft_putchar('C');
		}
		else
		{	
			ft_putchar('A');
		}
	}
	else if ((i == y && j == 1) || (i == 1 && j == x))
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
