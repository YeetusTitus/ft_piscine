/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:54:11 by jforner           #+#    #+#             */
/*   Updated: 2021/07/10 15:10:53 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_test_char01(int i, int j, int l, int h)
{
	if ((i == 1 && j == 1) || (j == h && i == l))
	{
		if (((h == 1 && i == l) && l != 1 ) || ((l == 1 && j == h) && h != 1))
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('/');
		}
	}
	else if ((i == l && j == 1) || (i == 1 && j == h))
	{
		ft_putchar('\\');
	}
	else if ((i == 1 || i == l) || (j == 1 || j == h))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush01(int l, int h)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= h)
	{
		while (i <= l)
		{
			ft_test_char01(i, j, l, h);
			i++;
		}
		ft_putchar('\n');
		i = 1;
		j++;
	}
}
