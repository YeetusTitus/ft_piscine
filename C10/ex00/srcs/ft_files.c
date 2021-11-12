/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:15:37 by jforner           #+#    #+#             */
/*   Updated: 2021/07/24 09:57:00 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"
int	ft_read_file(char *file)
{
	int		ofile;
	char	buf[30000];
	int		size;

	ofile = open(file, O_RDONLY);
	size = read(ofile, buf, 30000);
	if (ofile == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	buf[size] = 0;
	write (1, buf, size);
	close (ofile);
	return (1);
}
